/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:37:35 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 19:17:26 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/master.hpp"

int main(void)
{
    DiamondTrap warrior1("David");

    std::cout << "Energy_points: "<< warrior1.getEnergyPoints() << std::endl;
    std::cout << "hit_points: "<< warrior1.getHitPoints() << std::endl;
    std::cout << "Attack_damage: "<< warrior1.getAttackDamage() << std::endl;
    std::cout << "ClapTrap::name: " << warrior1.ClapTrap::getName() << std::endl;
    return 0;
}