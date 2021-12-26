/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 18:11:56 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 18:41:07 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    this->initMemory();
    return;
}

MateriaSource::MateriaSource(const MateriaSource &srcs)
{
    for (int i = 0; i < MEMORY_SIZE; i++)
    {
        if (this->_memory[i])
            delete this->_memory[i];
        this->_memory[i] = srcs._memory[i]->clone();
    }
    return;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < MEMORY_SIZE; i++)
    {
        if (this->_memory[i])
            delete this->_memory[i];
    }
    return;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    for (int i = 0; i < MEMORY_SIZE; i++)
    {
        if (this->_memory[i])
            delete this->_memory[i];
        this->_memory[i] = rhs._memory[i]->clone();
    }
    return (*this);
}

void MateriaSource::initMemory(void)
{
    for (int i = 0; i < MEMORY_SIZE; i++)
        this->_memory[i] = NULL;
    return;
}

void MateriaSource::learnMateria(AMateria *mat)
{
    if (this->_memory[MEMORY_SIZE - 1] != NULL)
    {
        std::cout << "Memory already full!" << std::endl;
        return ;
    }
    for (int i = 0; i < MEMORY_SIZE; i++)
    {
        if (this->_memory[i] == NULL)
        {
                this->_memory[i] = mat;
                return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < MEMORY_SIZE; i++)
    {
        if (this->_memory[i]->getType().compare(type) == 0)
            return (_memory[i]->clone());
    }
    std::cout << type << " is not part of source Materias!" << std::endl;
    return (0);
}
