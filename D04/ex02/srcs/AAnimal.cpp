/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:13:44 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 12:48:05 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

AAnimal::AAnimal(void) : _type("Default")
{
    std::cout << "AAnimal Default Constructor called" << std::endl;
    return ;
}

AAnimal::AAnimal(const AAnimal &srcs)
{
    std::cout << "AAnimal copy Constructor called" << std::endl;
    this->_type = srcs._type;
    return ;
}

AAnimal::~AAnimal(void) 
{
    std::cout << "AAnimal Destructor called" << std::endl;
    return ;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs) 
{
    std::cout << "AAnimal assignation overload called" << std::endl;
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

std::string AAnimal::getType(void) const
{
    return (this->_type);
}
