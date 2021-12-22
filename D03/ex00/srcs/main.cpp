/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:37:35 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 17:11:40 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/master.hpp"

int main(void)
{
    ClapTrap warrior1("David");
    ClapTrap warrior2("Henry");

    warrior1.attack("Henry");
    warrior2.takeDamage(50);
    warrior2.beRepaired(10);
    return 0;
}