/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:28:17 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/23 10:55:28 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "master.hpp"

class Cat : public Animal {

    public:

        // Constructors and destructor
        Cat(void);
        Cat(const Cat &src);
        virtual ~Cat();

        // Operator overloads
        Cat&	operator=(const Cat &rhs);

        // Getters / Setters

        // Member functions
        void makeSound(void) const;

    protected:

        // Internal functions

        // Attributes

    private:

        // Internal functions

        // Attributes

};

#endif