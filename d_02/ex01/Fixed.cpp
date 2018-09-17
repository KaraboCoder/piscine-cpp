/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 10:37:18 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/07 10:37:21 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->fixedPoint = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called\n";
    this->fixedPoint = roundf((f * (float)(1 << this->bits)));
}

Fixed::Fixed(const int i) {
    std::cout << "Int constructor called\n";
    this->fixedPoint = (i << this->bits);
}

Fixed::Fixed(const Fixed & oldFixed) {
    std::cout << "Copy constructor called\n";
    *this = oldFixed;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called\n";
}

Fixed & Fixed::operator=(const Fixed & anotherFixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->fixedPoint = anotherFixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return this->fixedPoint;
}

void Fixed::setRawBits(int i) {
    this->fixedPoint = i;
}

float Fixed::toFloat(void) const {
    return ((float)this->getRawBits()/(float)(1<<this->bits));
}

int Fixed::toInt(void) const {
    return (this->getRawBits() >> this->bits);
}

std::ostream & operator<<(std::ostream & o, const Fixed & f) {
    o << f.toFloat();
    return o;
}