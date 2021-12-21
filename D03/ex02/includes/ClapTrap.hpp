/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:01:14 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 16:11:54 by vbaron           ###   ########.fr       */
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
        ClapTrap(const std::string name);
        virtual ~ClapTrap();

        // Operator overloads

        // Getters / Setters
        std::string getName(void) const;
        int getEnergyPoints(void) const;
        int getHitPoints(void) const;
        int getAttackDamage(void) const;

        // Member functions
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:


        // Internal functions

        // Attributes
        std::string _name;
        unsigned int _hitPoints = 10;
        unsigned int _energyPoints = 10;
         unsigned int _attackDamage = 0;

};





#endif