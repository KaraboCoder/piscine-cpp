/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:51:12 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 12:51:14 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include <string>
#include "Zombie.hpp"

class ZombieEvent{
    public:
        ZombieEvent();
        ~ZombieEvent(void);
        void setZombieType(std::string);
        Zombie* newZombie(std::string);
        void randomChump(void) const;

    private:
        std::string type;
};

#endif