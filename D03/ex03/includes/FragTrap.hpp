/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:56:23 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 17:22:15 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#define FRAG_HIT 100
#define FRAG_EN 100
#define FRAG_ATTACK 30
#include "master.hpp"

class FragTrap : virtual public ClapTrap {

    public:

        // Constructors and destructor
        FragTrap(void);
        FragTrap(const FragTrap &srcs);
        FragTrap(const std::string& name);
        virtual ~FragTrap();


        // Operator overloads
        FragTrap& operator=(const FragTrap &rhs);
        // Getters / Setters

        // Member functions
        virtual void attack(std::string const &target);
        void highFiveGuys(void) const;

    private:


        // Internal functions

        // Attributes

};

#endif