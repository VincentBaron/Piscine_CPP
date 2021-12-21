/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:03:22 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 16:46:25 by vbaron           ###   ########.fr       */
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

ScavTrap::ScavTrap(const ScavTrap &srcs) : ClapTrap(srcs)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << name << " ScavTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20; 
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return;
}

void ScavTrap::guardGate(void) const
{
    std::cout << this->_name << " ScavTrap has entered keeper mode" << std::endl;
}
