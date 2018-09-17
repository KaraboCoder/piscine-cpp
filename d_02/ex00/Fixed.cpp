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
#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->fixedPoint = 0;
    std::cout << "Default constructor called\n";
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
    std::cout << "getRawBits member function called\n";
    return this->fixedPoint;
}

void Fixed::setRawBits(int i) {
    this->fixedPoint = i;
}
