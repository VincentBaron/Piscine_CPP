/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:33:52 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 15:07:04 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

Dog::Dog(void) :
_brain(new Brain("I love Humans"))
{
    std::cout << "Dog Default Constructor called" << std::endl;
    this->_type = "Dog";
    return ;
}

Dog::Dog(const Dog &srcs)
{
    std::cout << "Dog copy destructor called" << std::endl;
    this->_type = srcs._type;
    this->_brain = new Brain();
    *(this->_brain) = *(srcs._brain);
    return ;
}

Dog::~Dog(void) 
{

    std::cout << "Dog Destructor called" << std::endl;
    delete this->_brain;
    return ;
}

Dog	&Dog::operator=(const Dog &rhs) 
{
    std::cout << "Dog assignation overload called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    this->_brain = new Brain();
    *(this->_brain) = *(rhs._brain);
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Wouf!" << std::endl;
    return ;
}

Brain* Dog::getBrain(void) const
{
    return (this->_brain);
}
