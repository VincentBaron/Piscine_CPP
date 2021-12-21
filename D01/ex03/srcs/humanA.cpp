/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:33:55 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/16 16:03:41 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) const
{
  std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}
