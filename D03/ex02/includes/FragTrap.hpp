/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:56:23 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 17:46:45 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "master.hpp"

class FragTrap : protected ClapTrap {

    public:

        // Constructors and destructor
        FragTrap(void);
        FragTrap(const FragTrap &srcs);
        FragTrap(const std::string name);
        virtual ~FragTrap();


        // Operator overloads

        // Getters / Setters

        // Member functions
        void highFiveGuys(void) const;

    private:


        // Internal functions

        // Attributes

};

#endif