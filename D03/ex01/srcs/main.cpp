/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:37:35 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 17:16:36 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/master.hpp"

int main(void)
{
    ScavTrap warrior1("David");
    ScavTrap warrior2("Henry");

    warrior1.attack("Henry");
    warrior2.takeDamage(10);
    warrior2.beRepaired(50);
    warrior2.guardGate();
    return 0;
}