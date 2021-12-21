#include "../includes/Zombie.hpp"
#include <iostream>

Zombie  *zombieHorde(int nb, std::string name)
{
    Zombie *zombies;

    zombies = new Zombie[nb];
    for (int i= 0; i < nb; i++)
        zombies[i].setName(name + std::to_string(i + 1));
    return (zombies);
}