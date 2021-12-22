/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:48:17 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 17:00:37 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

DiamondTrap::DiamondTrap(void) :
ClapTrap(), FragTrap(), ScavTrap(), _name("DefaultDiamond")
{
    std::cout << "Default DiamondTrap Constructor called" << std::endl;
    this->_hitPoints = FRAG_HIT;
    this->_energyPoints = SCAV_EN;
    this->_attackDamage = FRAG_ATTACK;
    return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &srcs)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = srcs;
    return ;
}

DiamondTrap::DiamondTrap(const std::string& name) :
ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name)
{
    std::cout << name << " DiamondTrap name input constructor called" << std::endl;
    this->ClapTrap::_name = name + "_clap_name";
    this->_hitPoints = FRAG_HIT;
    this->_energyPoints = SCAV_EN;
    this->_attackDamage = FRAG_ATTACK;
    return ;
}

DiamondTrap::~DiamondTrap(void) {

    std::cout << "DiamondTrap destructor called" << std::endl;
    return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
    std::cout << "DiamondTrap operator overload called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) const
{
    std::cout << "My name is " << this->_name << " and my clap name is " << this->ClapTrap::_name << std::endl;
    return ;
} 