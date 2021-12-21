/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:44:01 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/20 13:57:37 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

    public:

        // Constructors and destructor
        Weapon(std::string weapon);
        ~Weapon(void);
        // Member functions
        const std::string& getType() const;
        void setType(std::string weapon);

    private:

        // Internal functions

        // Attributes
        std::string _type;
};

#endif