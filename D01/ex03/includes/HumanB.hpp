/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:45:27 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/16 18:25:08 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

#include <iostream>

class HumanB
{

    public:
        // Constructors and destructor
        HumanB(std::string name);
        ~HumanB(void);
        // Member functions
        void attack(void) const;
        void setWeapon(Weapon &weapon);

        // Attributes

    private:
        // Internal functions
        // Attributes
        std::string name;
        Weapon *weapon;
};

#endif