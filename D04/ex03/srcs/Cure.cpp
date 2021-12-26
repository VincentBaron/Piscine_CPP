/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:03:12 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 15:09:02 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/master.hpp"

Cure::Cure(void) 
{
    this->_type = "cure";
    return ;
}

Cure::Cure(const Cure &srcs) 
{
    this->_type = srcs._type;
    return ;
}

Cure::~Cure(void) 
{

    return ;
}

Cure	&Cure::operator=(const Cure &rhs) 
{
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return (*this);
}

AMateria* Cure::clone(void) const
{
    AMateria* new_materia = new Cure();
    return (new_materia);
}
