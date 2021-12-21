/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:54:43 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 11:07:49 by vbaron           ###   ########.fr       */
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
        Fixed(const int nbr);
        Fixed (const float nbr);
        virtual ~Fixed();

        // Operator overloads
        Fixed&	operator=(const Fixed &rhs);
        Fixed&  operator++(void);
        Fixed   operator++(int);
        Fixed&  operator--(void);
        Fixed   operator--(int);
        
        Fixed   operator+(const Fixed& rhs) const;
        Fixed   operator-(const Fixed& rhs) const;
        Fixed   operator*(const Fixed& rhs) const;
        Fixed   operator/(const Fixed& rhs) const;

        bool    operator==(const Fixed& rhs) const;
        bool    operator!=(const Fixed& rhs) const;
        bool    operator<(const Fixed& rhs) const;
        bool    operator>(const Fixed& rhs) const;
        bool    operator<=(const Fixed& rhs) const;
        bool    operator>=(const Fixed& rhs) const;

        // Getters / Setters
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int getFractionBits(void) const;

        // Member functions
        float toFloat(void) const;
        int toInt(void) const;

        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);

    private:


        // Internal functions
        int _value;
        static const int _fractBits = 8;
        // Attributes

};



#endif