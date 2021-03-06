/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:13:44 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 22:00:07 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

Animal::Animal(void) : _type("Default")
{
    std::cout << "Animal Default Constructor called" << std::endl;
    return ;
}

Animal::Animal(const Animal &srcs)
{
    std::cout << "Animal copy destructor called" << std::endl;
    *this = srcs;
    return ;
}

Animal::~Animal(void) 
{
    std::cout << "Animal Destructor called" << std::endl;
    return ;
}

Animal	&Animal::operator=(const Animal &rhs) 
{
    std::cout << "Animal assignation overload called" << std::endl;
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

void Animal::makeSound(void) const
{
    std::cout << "zabaZaba!" << std::endl;
    return ;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}
