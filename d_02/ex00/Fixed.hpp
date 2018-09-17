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

class Fixed{
    public:
        Fixed(void);
        Fixed(const Fixed &);
        ~Fixed(void);
        Fixed & operator=(const Fixed &);
        int getRawBits(void)const;
        void setRawBits(int);
    private:
        int fixedPoint;
        static const int bits = 8;
};

#endif