/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:13:44 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 12:48:05 by vbaron           ###   ########.fr       */
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
    std::cout << "Animal copy Constructor called" << std::endl;
    this->_type = srcs._type;
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
