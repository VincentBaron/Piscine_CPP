/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:56:23 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 17:46:55 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "master.hpp"

class ScavTrap : protected ClapTrap {

    public:

        // Constructors and destructor
        ScavTrap(void);
        ScavTrap(const ScavTrap &srcs);
        ScavTrap(const std::string name);
        virtual ~ScavTrap();


        // Operator overloads

        // Getters / Setters

        // Member functions
        void guardGate(void) const;

    private:


        // Internal functions

        // Attributes

};

#endif