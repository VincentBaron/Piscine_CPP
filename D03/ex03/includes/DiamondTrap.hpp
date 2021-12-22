/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:44:31 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 16:50:23 by vbaron           ###   ########.fr       */
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
        DiamondTrap(const std::string& name);
        virtual ~DiamondTrap();


        // Operator overloads
        DiamondTrap& operator=(const DiamondTrap &rhs);
        // Getters / Setters

        // Member functions
        void whoAmI(void) const;
        virtual void attack(const std::string &target);

    private:

        std::string _name;
        // Internal functions

        // Attributes

};

#endif