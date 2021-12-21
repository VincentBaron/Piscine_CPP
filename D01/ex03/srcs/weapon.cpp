/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:53:01 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/20 13:56:58 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon) {}

Weapon::~Weapon(void) {}

const std::string& Weapon::getType() const
{
    const std::string& ref = this->_type;
    
    return (ref);
}

void Weapon::setType(std::string weapon)
{
    this->_type = weapon;
}
