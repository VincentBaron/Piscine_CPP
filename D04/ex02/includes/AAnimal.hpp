/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:12:21 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 13:12:30 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP
#include "master.hpp"

class AAnimal {

    public:

        // Constructors and destructor
        AAnimal(void);
        AAnimal(const AAnimal &src);
        virtual ~AAnimal();

        // Operator overloads
        AAnimal&	operator=(const AAnimal &rhs);

        // Getters / Setters

        // Member functions
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;

    protected:
    
        // Internal functions

        // Attributes
        std::string _type;

};

#endif