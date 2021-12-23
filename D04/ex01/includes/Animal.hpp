/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:12:21 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 21:55:53 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include "master.hpp"

class Animal {

    public:

        // Constructors and destructor
        Animal(void);
        Animal(const Animal &src);
        virtual ~Animal();

        // Operator overloads
        Animal&	operator=(const Animal &rhs);

        // Getters / Setters

        // Member functions
        virtual void makeSound(void) const;
        std::string getType(void) const;

    protected:
    
        // Internal functions

        // Attributes
        std::string _type;

};

#endif