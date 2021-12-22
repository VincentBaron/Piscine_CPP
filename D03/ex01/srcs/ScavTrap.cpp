/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:03:22 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 17:06:40 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_name = "DefaultScavTrap";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return;
}

ScavTrap::ScavTrap(const ScavTrap &srcs)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = srcs;
    return ;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << name << " ScavTrap name input constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20; 
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "ScavTrap operator overload called" << std::endl;
    if (this == &rhs)
        return *this;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void ScavTrap::attack(std::string const &target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ScavTrap" << this->_name << " does not have sufficient energy to Scav attack!" << std::endl;
        return ;
    }
    this->_energyPoints--;
    std::cout << "ScavTrap" << this->_name << " Scav attacks " << target << " causing " << this->_attackDamage << " points of damage!"<< std::endl;
    std::cout << "ScavTrap" << this->_name << " now has " << this->_energyPoints << " energy points." << std::endl;
}

void ScavTrap::guardGate(void) const
{
    std::cout << "ScavTrap" << this->_name << "has entered keeper mode" << std::endl;
}
