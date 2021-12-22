/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:33:52 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 21:57:02 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog Default Constructor called" << std::endl;
    this->_type = "Dog";
    return ;
}

Dog::Dog(const Dog &srcs)
{
    std::cout << "Dog copy destructor called" << std::endl;
    *this = srcs;
    return ;
}

Dog::~Dog(void) 
{

    std::cout << "Dog Destructor called" << std::endl;
    return ;
}

Dog	&Dog::operator=(const Dog &rhs) 
{
    std::cout << "Dog assignation overload called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Wouf!" << std::endl;
    return ;
}
