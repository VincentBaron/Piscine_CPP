/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:41:58 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/16 12:40:21 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

Zombie *newZombie(std::string name)
{
    Zombie *zombie;

    zombie = new Zombie(name);
    return (zombie);
}

void randomChump(std::string name)
{
    Zombie zombie(name);

    zombie.announce();
}

int main(int ac, char **av)
{
    Zombie *zombie1;
    std::string name1 = "Zombie1";
    std::string name2 = "Zombie2";

    if (ac > 3)
    {
        std::cout << "Can only create 2 zombies mate!" << std::endl;
        return (1);
    }
    if (ac > 2)
    {
        name1 = av[1];
        if (ac == 3)
            name2 = av[2];
    }
    zombie1 = newZombie(name1);
    zombie1->announce();
    randomChump(name2);
    delete (zombie1);
    return (0);
}
