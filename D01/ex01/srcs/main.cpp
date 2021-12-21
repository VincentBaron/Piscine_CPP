/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:47:57 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/16 14:17:17 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

int main (int ac, char **av)
{
    if (ac < 2 || ac > 3)
    {
        std::cout << "Wrong no. of arguments, you need the following:\n\n\targv[1] = <N amount of Zombies>\n\targv[2] = <Name of Zombies>\n\nCome on mate!" << std::endl;
        return (0);
    }
    Zombie *zombie_list = zombieHorde(atoi(av[1]), av[2]);
    for (int i = 0; i < atoi(av[1]); i++)
        zombie_list[i].announce();
    delete [] zombie_list;
    return (0);
}