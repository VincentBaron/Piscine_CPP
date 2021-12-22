/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:37:35 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 17:22:49 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/master.hpp"

int main(void)
{
    FragTrap warrior1("David");
    FragTrap warrior2("Henry");

    warrior1.attack("Henry");
    warrior2.takeDamage(10);
    warrior2.beRepaired(50);
    warrior2.highFiveGuys();
    return 0;
}