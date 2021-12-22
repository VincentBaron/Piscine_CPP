/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:07:49 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 17:05:17 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

//Constructors & Destructors

ClapTrap::ClapTrap(void) :
_name("DefaultName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default ClapTrap default constuctor has been called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap &srcs)
{
    std::cout << "Copy ClapTrap constructor has been called" << std::endl;
    *this = srcs;
    return ;
}

ClapTrap::ClapTrap(const std::string &name) :
_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << name << " ClapTrap name input constructor called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
    return ;
}

//Operator overloads

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "ClapTrap operator overload called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

// Member functions


void ClapTrap::attack(std::string const &target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap" << this->_name << " does not have sufficient energy to Clap attack!" << std::endl;
        return ;
    }
    this->_energyPoints--;
        std::cout << "ClapTrap" << this->_name << " Clap attacks " << target << " causing " << this->_attackDamage << " points of damage!"<< std::endl;
    std::cout << "ClapTrap" << this->_name << " now has " << this->_energyPoints << " energy points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->_hitPoints)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    std::cout << "ClapTrap" << this->_name << " receives " << amount << " of damage!" << std::endl;
    if (this->_hitPoints == 0)
        std::cout << "ClapTrap" << this->_name << " is dead!" << std::endl;
    else
        std::cout << "ClapTrap" << this->_name << " now has " << this->_hitPoints << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap" << this->_name << " is already dead and can't be repaired!" << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    std::cout << "ClapTrap" << this->_name << " is repaired by " << amount << std::endl;
    std::cout << "ClapTrap" << this->_name << " now has " << this->_hitPoints << " hit points." << std::endl;
}
