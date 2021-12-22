/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:13:44 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 22:00:07 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default")
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &srcs)
{
    std::cout << "WrongAnimal copy destructor called" << std::endl;
    *this = srcs;
    return ;
}

WrongAnimal::~WrongAnimal(void) 
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
    return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs) 
{
    std::cout << "WrongAnimal assignation overload called" << std::endl;
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong animal zabaZaba!" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}
