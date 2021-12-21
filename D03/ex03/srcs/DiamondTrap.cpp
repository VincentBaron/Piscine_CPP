/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:48:17 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 19:16:53 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout << "Default DiamondTrap Constructor called" << std::endl;
    this->_name = "Default DiamondTrap";
    this->_hitPoints = FRAG_HIT;
    this->_energyPoints = SCAV_EN;
    this->_attackDamage = FRAG_ATTACK;
    return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &srcs) : ClapTrap(srcs), FragTrap(srcs), ScavTrap(srcs)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->_name = srcs._name;
    ClapTrap::_name.append("_clap_name");
    this->_hitPoints = FRAG_HIT;
    this->_energyPoints = SCAV_EN;
    this->_attackDamage = FRAG_ATTACK;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    std::cout << name << " DiamondTrap default constructor called" << std::endl;
    ClapTrap::_name.append("_clap_name");
    this->_name = name;
    this->_hitPoints = FRAG_HIT;
    this->_energyPoints = SCAV_EN;
    this->_attackDamage = FRAG_ATTACK;
    return ;
}

std::string DiamondTrap::getName() const
{
    return (this->_name);
}

DiamondTrap::~DiamondTrap(void) {

    std::cout << "DiamondTrap destructor called" << std::endl;
    return ;
}
