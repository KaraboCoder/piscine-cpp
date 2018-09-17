/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:39:01 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 14:39:05 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain{
    public:
        Brain(int,int);
        ~Brain(void);
        int getSize(void) const;
        int getIQ(void) const;
        void setSize(int);
        void setIQ(int);
        std::string identify(void)const;
    private:
        int size;
        int IQ;
};

#endif