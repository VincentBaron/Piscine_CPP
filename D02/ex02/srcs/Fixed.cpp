/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:59:06 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/21 11:12:00 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

Fixed::Fixed(void) : _value(0){

    return ;
}

Fixed::Fixed(const Fixed &srcs) : _value(srcs._value){

    return ;
}

Fixed::Fixed(const int nbr) {

    this->_value = roundf(nbr * (1 << this->getFractionBits()));
    
}

Fixed::Fixed(const float nbr) {

    this->_value = roundf(nbr * (1 << this->getFractionBits()));
    
}

Fixed::~Fixed(void) {

    return ;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {

    this->_value = rhs.getRawBits();
    return (*this);
}

Fixed& Fixed::operator++(void)
{
    ++(this->_value);
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed old(*this);

    operator++();
    return (old);
}

Fixed& Fixed::operator--(void)
{
    --(this->_value);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed old(*this);

    operator--();
    return (old);
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
    return(Fixed( this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    return(Fixed( this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
    return(Fixed( this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
    return(Fixed( this->toFloat() / rhs.toFloat()));
}

bool Fixed::operator==(const Fixed& rhs) const
{
    return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(const Fixed& rhs) const
{
    return (this->toFloat() != rhs.toFloat());
}

bool Fixed::operator<(const Fixed& rhs) const
{
    return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>(const Fixed& rhs) const
{
    return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<=(const Fixed& rhs) const
{
    return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator>=(const Fixed& rhs) const
{
    return (this->toFloat() >= rhs.toFloat());
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

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

std::ostream& operator<<(std::ostream& os, const Fixed& rhs) {

    os << rhs.toFloat();
    return (os);
}

Fixed& max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

Fixed& min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}