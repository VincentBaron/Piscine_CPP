/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:59:06 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 09:34:10 by vbaron           ###   ########.fr       */
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

Fixed::Fixed(const int nbr) {

    std::cout << "Int constructor called" << std::endl;
    this->_value = roundf(nbr * (1 << this->getFractionBits()));
    
}

Fixed::Fixed(const float nbr) {

    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(nbr * (1 << this->getFractionBits()));
    
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

int Fixed::getFractionBits(void) const {

    return (this->_fractBits);
}

int Fixed::getRawBits(void) const {
    
    return (this->_value);
}

void Fixed::setRawBits(int const raw) {

    this->_value = raw;
}

float Fixed::toFloat(void) const {

    float ret = static_cast<float>(this->getRawBits()) / (static_cast<float>(1 << this->getFractionBits()));
    return (ret);
}

int Fixed::toInt(void) const {
    
    int ret = this->getRawBits() / (1 << this->getFractionBits());
    return (ret);
}

std::ostream& operator<<(std::ostream& os, const Fixed& rhs) {

    os << rhs.toFloat();
    return (os);
}
