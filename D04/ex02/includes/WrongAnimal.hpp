/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:12:21 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 22:09:14 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include "master.hpp"

class WrongAnimal {

    public:

        // Constructors and destructor
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &src);
        virtual ~WrongAnimal();

        // Operator overloads
        WrongAnimal&	operator=(const WrongAnimal &rhs);

        // Getters / Setters

        // Member functions
        void makeSound(void) const;
        std::string getType(void) const;

    protected:
    
        // Internal functions

        // Attributes
        std::string _type;

};

#endif