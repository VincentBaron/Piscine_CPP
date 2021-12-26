/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:33:52 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 15:06:52 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

Cat::Cat(void) :
_brain(new Brain("I will exterminate humans!"))
{
    std::cout << "Cat Default Constructor called" << std::endl;
    this->_type = "Cat";
    return ;
}

Cat::Cat(const Cat &srcs)
{
    std::cout << "Cat copy destructor called" << std::endl;
    this->_type = srcs._type;
    this->_brain = new Brain();
    *(this->_brain) = *(srcs._brain);
    return ;
}

Cat::~Cat(void) 
{

    std::cout << "Cat Destructor called" << std::endl;
    delete this->_brain;
    return ;
}

Cat	&Cat::operator=(const Cat &rhs) 
{
    std::cout << "Cat assignation overload called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    this->_brain = new Brain();
    *(this->_brain) = *(rhs._brain);
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
    return ;
}

Brain* Cat::getBrain(void) const
{
    return (this->_brain);
}
