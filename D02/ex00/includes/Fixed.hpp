/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:54:43 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 08:23:32 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "master.hpp"

class Fixed {

    public:

        // Constructors and destructor
        Fixed(void);
        Fixed(const Fixed &src);
        virtual ~Fixed();

        // Operator overloads
        Fixed&	operator=(const Fixed &rhs);

        // Getters / Setters
        int getRawBits(void) const;
        void setRawBits(int const raw);

        // Member functions

    private:


        // Internal functions
        int _value;
        static const int _fractBits = 8;
        // Attributes

};



#endif