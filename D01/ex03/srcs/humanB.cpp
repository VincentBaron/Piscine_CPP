/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:47:06 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/16 18:15:46 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

HumanB::HumanB(std::string name) : name(name) {
    this->weapon = NULL;
}

HumanB::~HumanB(void) {}

void HumanB::attack(void) const
{
    if (this->weapon == NULL)
        return ;
    std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;  
}

void HumanB::setWeapon(Weapon& weapon)
{    
    this->weapon = &weapon;
}
