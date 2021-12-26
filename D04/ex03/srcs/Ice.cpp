/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:03:12 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 17:17:38 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Ice.hpp"

Ice::Ice(void) 
{
    this->_type = "ice";
    return ;
}

Ice::Ice(const Ice &srcs) 
{
    this->_type = srcs._type;
    return ;
}

Ice::~Ice(void) 
{

    return ;
}

Ice	&Ice::operator=(const Ice &rhs) 
{
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

AMateria* Ice::clone(void) const
{
    AMateria* new_materia = new Ice();
    return (new_materia);
}
