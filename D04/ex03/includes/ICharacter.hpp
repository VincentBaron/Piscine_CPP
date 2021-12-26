/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 15:19:44 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 16:40:46 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include <iostream>
#include "master.hpp"
class ICharacter
{
public:
    virtual ~ICharacter() {}

    virtual std::string const &getName() const = 0;
    virtual void        equip(AMateria *m) = 0;
    virtual void        unequip(int idx) = 0;
    virtual void        use(int idx, ICharacter &target) = 0;
};

#endif