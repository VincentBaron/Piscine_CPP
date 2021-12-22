/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:03:22 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 17:06:44 by vbaron           ###   ########.fr       */
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

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << name << " FragTrap name input constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30; 
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "FragTrap operator overload called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void FragTrap::attack(std::string const &target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "FragTrap" << this->_name << " does not have sufficient energy to Frag attack!" << std::endl;
        return ;
    }
    this->_energyPoints--;
        std::cout << "FragTrap" << this->_name << " Frag attacks " << target << " causing " << this->_attackDamage << " points of damage!"<< std::endl;
    std::cout << "FragTrap" << this->_name << " now has " << this->_energyPoints << " energy points." << std::endl;
}

void FragTrap::highFiveGuys(void) const
{
    std::cout << "FragTrap" << this->_name << " wants to High Five everyone to make them happier persons!" << std::endl;
}
