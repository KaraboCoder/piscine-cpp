/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:47:09 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 10:47:14 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <string>

class Pony{
    public:
        Pony(std::string, std::string);
        Pony(const Pony &oldPony);
        ~Pony(void);
        void details(void) const;

    private:
        std::string name;
        std::string color;
};

#endif