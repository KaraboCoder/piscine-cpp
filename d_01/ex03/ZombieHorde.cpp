/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:52:49 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 13:52:51 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int numberOfZombies) {
    this->numberOfZombies = numberOfZombies;
    this->createZombies();
}

void ZombieHorde::announce(void) const{
    for (int i = 0; i < this->numberOfZombies; i++) {
        this->zombies[i].annnounce();
    }
}

void ZombieHorde::createZombies(void) {
    this->zombies = new Zombie[this->numberOfZombies];
    for (int i = 0; i < this->numberOfZombies; i++) {
        std::string _name = "Tinyiko" + std::to_string(i);
        this->zombies[i].setName(_name);
        this->zombies[i].setType("Female");
    }
}

ZombieHorde::~ZombieHorde(void) {
    delete [] this->zombies;
}