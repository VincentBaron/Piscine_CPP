/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:07:49 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 16:37:29 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

//Constructors & Destructors

ClapTrap::ClapTrap(void) : _name("DefaultName"){

    std::cout << "Default ClapTrap default constuctor has been called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap &srcs) : _name(srcs._name) {

    std::cout << "Copy ClapTrap constructor has been called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const std::string name) : _name(name) {

    std::cout << name << " ClapTrap constructor has been called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap() {

    std::cout << "ClapTrap Destructor has been called" << std::endl;
    return ;
}

// Getters & Setters

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

int ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}

int ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}

int ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}

// Methods


void ClapTrap::attack(std::string const &target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << this->_name << " does not have sufficient energy to attack!" << std::endl;
        return ;
    }
    this->_energyPoints--;
        std::cout << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!"<< std::endl;
    std::cout << this->_name << " now has " << this->_energyPoints << " energy points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->_hitPoints)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    std::cout << this->_name << " receives " << amount << " of damage!" << std::endl;
    if (this->_hitPoints == 0)
        std::cout << this->_name << " is dead!" << std::endl;
    else
        std::cout << this->_name << " now has " << this->_hitPoints << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << this->_name << " is already dead and can't be repaired!" << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    std::cout << this->_name << " is repaired by " << amount << std::endl;
    std::cout << this->_name << " now has " << this->_hitPoints << " hit points." << std::endl;
}
