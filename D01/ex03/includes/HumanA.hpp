/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:19:49 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/20 13:58:47 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

#include <iostream>

class HumanA {

    public:

        // Constructors and destructor
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        // Member functions
        void attack(void) const;

        // Attributes

    private:

        // Internal functions
        // Attributes
        std::string name;
        Weapon& weapon;
};

#endif