/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:30:33 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 16:28:40 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

Character::Character(void) : _name("Default")
{
    this->initInventory();
    return;
}

Character::Character(const Character &srcs)
{
    this->_name = srcs._name;
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        this->_inventory[i] = srcs._inventory[i]->clone();
        i++;
    }
    return;
}

Character::~Character(void)
{
     for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        i++;
    }
    return;
}

Character &Character::operator=(const Character &rhs)
{

    this->_name = rhs._name;
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        this->_inventory[i] = rhs._inventory[i]->clone();
        i++;
    }
    return (*this);
}

void Character::initInventory(void)
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
        this->_inventory[i] = NULL;
    return;
}

void Character::equip(AMateria *m)
{
    if (this->_inventory[INVENTORY_SIZE - 1] != NULL)
    {
        std::cout << "Inventory already full!" << std::endl;
        return ;
    }
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (this->_inventory[i] == NULL)
        {
                this->_inventory[i] = m;
                return ;
        }
        i++;
    }
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << "Wrong index" << std::endl;
        return ;
    }
    if (this->_inventory[idx] == NULL)
    {
        std::cout << "This inventory slot is already empty!" << std::endl;
        return ;
    }
    this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
     if (idx > 3 || idx < 0)
    {
        std::cout << "Wrong index" << std::endl;
        return ;
    }
    if (this->_inventory[idx] == NULL)
    {
        std::cout << "This inventory slot is empty!" << std::endl;
        return ;
    }
    this->_inventory[idx]->use(target);
}
