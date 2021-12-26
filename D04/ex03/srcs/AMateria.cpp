/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 13:54:35 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 16:30:45 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/AMateria.hpp"

AMateria::AMateria(void) 
{
    return ;
}

AMateria::AMateria(const AMateria &AMateria) 
{

    return ;
}

AMateria::~AMateria(void) 
{

    return ;
}

AMateria	&AMateria::operator=(const AMateria &rhs) 
{

    return (*this);
}

void AMateria::use(ICharacter& target) const
{
    if (this->getType().compare("ice") == 0)
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    if (this->getType().compare("cure") == 0)
        std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
    return ;
}
