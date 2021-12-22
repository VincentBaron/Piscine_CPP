/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:56:23 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 16:37:35 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# define SCAV_HIT 100
# define SCAV_EN 50
# define SCAV_ATTACK 20
# include "master.hpp"

class ScavTrap : virtual public ClapTrap {

    public:

        // Constructors and destructor
        ScavTrap(void);
        ScavTrap(const ScavTrap &srcs);
        ScavTrap(const std::string& name);
        virtual ~ScavTrap();


        // Operator overloads
        ScavTrap& operator=(const ScavTrap &rhs);

        // Getters / Setters

        // Member functions
        void attack(std::string const &target);
        void guardGate(void) const;

    private:


        // Internal functions

        // Attributes

};

#endif