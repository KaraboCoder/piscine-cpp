/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:52:58 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 13:53:00 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde{
    public:
        ZombieHorde(int);
        ~ZombieHorde();
        void announce(void) const;
    private:
        int numberOfZombies;
        Zombie* zombies;
        void createZombies(void);
};

#endif