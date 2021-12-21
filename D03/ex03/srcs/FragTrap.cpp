/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:03:22 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 18:07:14 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_name = "DefaultFragTrap";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return;
}

FragTrap::FragTrap(const FragTrap &srcs) : ClapTrap(srcs)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    std::cout << name << " FragTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30; 
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return;
}

void FragTrap::highFiveGuys(void) const
{
    std::cout << this->_name << " wants to High Five everyone to make them happier persons!" << std::endl;
}
