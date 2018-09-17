/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 10:37:28 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/07 10:37:31 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    public:
        Fixed(void);
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &);
        ~Fixed(void);
        Fixed & operator=(const Fixed &);
        bool operator==(const Fixed &);
        bool operator<=(const Fixed &);
        bool operator>=(const Fixed &);
        bool operator!=(const Fixed &);
        bool operator<(const Fixed &);
        bool operator>(const Fixed &);
        Fixed operator+(const Fixed &);
        Fixed operator-(const Fixed &);
        Fixed operator*(const Fixed &);
        Fixed operator/(const Fixed &);
        Fixed & operator++(void);
        Fixed & operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);   
        
        int getRawBits(void)const;
        void setRawBits(int);
        float toFloat(void) const;
        int toInt(void) const;
        
        static Fixed & min(Fixed &, Fixed &);
        static const Fixed & min(const Fixed &, const Fixed &);

        static Fixed & max(Fixed &, Fixed &);
        static const Fixed & max(const Fixed &, const Fixed &);
    private:
        int fixedPoint;
        static const int bits = 8;
};

std::ostream & operator<<(std::ostream &, const Fixed &);

#endif