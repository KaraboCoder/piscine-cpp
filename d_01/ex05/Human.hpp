/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:39:20 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 14:39:21 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human{
    public:
        Human(void);
        void setName(std::string);
        std::string getName(void) const;
        void setAge(int);
        int getAge(void) const;
        std::string identify(void) const;
        const Brain* getBrain(void) const;
    private:
        int age;
        std::string name;
        const Brain *brain;
};

#endif