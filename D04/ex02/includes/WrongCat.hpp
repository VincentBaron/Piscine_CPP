/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:28:17 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 22:01:35 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "master.hpp"

class WrongCat : public WrongAnimal {

    public:

        // Constructors and destructor
        WrongCat(void);
        WrongCat(const WrongCat &src);
        virtual ~WrongCat();

        // Operator overloads
        WrongCat&	operator=(const WrongCat &rhs);

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