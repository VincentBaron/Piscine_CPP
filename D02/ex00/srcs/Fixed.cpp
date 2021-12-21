/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:59:06 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 09:25:32 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

Fixed::Fixed(void) : _value(0){

    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &srcs) : _value(srcs._value){

    std::cout << "Copy constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(void) {

    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {

    std::cout << "Assignation operator called" << std::endl;

    this->_value = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw) {

    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}


