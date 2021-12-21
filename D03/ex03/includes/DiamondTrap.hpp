/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:44:31 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 19:16:33 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "master.hpp"

class DiamondTrap : public FragTrap, public ScavTrap  {

    public:

        // Constructors and destructor
        DiamondTrap(void);
        DiamondTrap(const DiamondTrap &srcs);
        DiamondTrap(const std::string name);
        virtual ~DiamondTrap();


        // Operator overloads

        // Getters / Setters

        // Member functions
        std::string getName(void) const;

    private:

        std::string _name;
        // Internal functions

        // Attributes

};

#endif