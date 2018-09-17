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
}

Fixed::Fixed(const float f) {
    this->fixedPoint = roundf((f * (float)(1 << this->bits)));
}

Fixed::Fixed(const int i) {
    this->fixedPoint = (i << this->bits);
}

Fixed::Fixed(const Fixed & oldFixed) {
    *this = oldFixed;
}

Fixed::~Fixed(void) {
}

Fixed & Fixed::operator=(const Fixed & anotherFixed) {
    this->fixedPoint = anotherFixed.getRawBits();
    return *this;
}

bool Fixed::operator==(const Fixed & anotherFixed) {
    return this->fixedPoint == anotherFixed.fixedPoint;
}

bool Fixed::operator<=(const Fixed & anotherFixed) {
    return this->fixedPoint <= anotherFixed.fixedPoint;
}

bool Fixed::operator>=(const Fixed & anotherFixed) {
    return this->fixedPoint >= anotherFixed.fixedPoint;
}

bool Fixed::operator!=(const Fixed & anotherFixed) {
    return this->fixedPoint != anotherFixed.fixedPoint;
}

bool Fixed::operator<(const Fixed & anotherFixed) {
    return this->fixedPoint < anotherFixed.fixedPoint;
}

bool Fixed::operator>(const Fixed & anotherFixed) {
    return this->fixedPoint > anotherFixed.fixedPoint;
}

Fixed Fixed::operator+(const Fixed & anotherFixed) {
    return Fixed(this->toFloat() + anotherFixed.toFloat());
}

Fixed Fixed::operator-(const Fixed & anotherFixed) {
    return Fixed(this->toFloat() - anotherFixed.toFloat());
}

Fixed Fixed::operator*(const Fixed & anotherFixed) {
    return Fixed(this->toFloat() * anotherFixed.toFloat());
}

Fixed Fixed::operator/(const Fixed & anotherFixed) {
    return Fixed(this->toFloat() / anotherFixed.toFloat());
}

Fixed & Fixed::operator++(void) {
    this->fixedPoint = roundf(((this->toFloat() + 0.00390625f) * (float)(1 << this->bits)));
    return *this;
}

Fixed & Fixed::operator--(void) {
    this->fixedPoint = roundf(((this->toFloat() - 0.00390625f) * (float)(1 << this->bits)));
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed duplicate(*this);
    this->fixedPoint = roundf(((this->toFloat() + 0.00390625f) * (float)(1 << this->bits)));
    return duplicate;
}

Fixed Fixed::operator--(int) {
    Fixed duplicate(*this);
    this->fixedPoint = roundf(((this->toFloat() - 0.00390625f) * (float)(1 << this->bits)));
    return duplicate;
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

Fixed & Fixed::min(Fixed & lhs, Fixed & rhs) {
    if (lhs.toFloat() < rhs.toFloat())
        return lhs;
    else
        return rhs;
}

const Fixed & Fixed::min(const Fixed & lhs, const Fixed & rhs) {
    if (lhs.toFloat() < rhs.toFloat())
        return lhs;
    else
        return rhs;
}

Fixed & Fixed::max(Fixed & lhs, Fixed & rhs) {
    if (lhs.toFloat() > rhs.toFloat())
        return lhs;
    else
        return rhs;
}

const Fixed & Fixed::max(const Fixed & lhs, const Fixed & rhs) {
    if (lhs.toFloat() > rhs.toFloat())
        return lhs;
    else
        return rhs;
}

std::ostream & operator<<(std::ostream & o, const Fixed & f) {
    o << f.toFloat();
    return o;
}