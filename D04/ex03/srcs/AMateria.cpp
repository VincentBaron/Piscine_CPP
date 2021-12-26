/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 13:54:35 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 17:31:41 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/AMateria.hpp"
# include <iostream>

AMateria::AMateria(void) : _type("Default")
{
    return ;
}

AMateria::AMateria(const AMateria &srcs) : _type(srcs._type)
{

    return ;
}

AMateria::~AMateria(void) 
{

    return ;
}

AMateria	&AMateria::operator=(const AMateria &rhs) 
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

const std::string& AMateria::getType(void) const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target) const
{
    if (this->getType().compare("ice") == 0)
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    if (this->getType().compare("cure") == 0)
        std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
    return ;
}
