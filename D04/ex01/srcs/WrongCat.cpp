/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:33:52 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 21:59:58 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
    this->_type = "WrongCat";
    return ;
}

WrongCat::WrongCat(const WrongCat &srcs)
{
    std::cout << "WrongCat copy destructor called" << std::endl;
    *this = srcs;
    return ;
}

WrongCat::~WrongCat(void) 
{

    std::cout << "WrongCat Destructor called" << std::endl;
    return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs) 
{
    std::cout << "WrongCat assignation overload called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
    return ;
}
