/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:01:14 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 14:30:57 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include "master.hpp"

class ClapTrap {

    public:

        // Constructors and destructor
        ClapTrap(void);
        ClapTrap(const ClapTrap &srcs);
        ClapTrap(const std::string &name);
        virtual ~ClapTrap();

        ClapTrap& operator=(const ClapTrap &rhs);

        // Operator overloads

        // Getters / Setters
        std::string getName(void) const;

        // Member functions
        virtual void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:


        // Internal functions

        // Attributes
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
         unsigned int _attackDamage;

};





#endif