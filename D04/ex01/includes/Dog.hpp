/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:28:17 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 12:24:22 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "master.hpp"

class Dog : public Animal {

    public:

        // Constructors and destructor
        Dog(void);
        Dog(const Dog &src);
        virtual ~Dog();

        // Operator overloads
        Dog&	operator=(const Dog &rhs);

        // Getters / Setters

        // Member functions
        void makeSound(void) const;
        Brain* getBrain(void) const;

    protected:

        // Internal functions

        // Attributes

    private:

        // Internal functions

        // Attributes
        Brain* _brain;

};

#endif