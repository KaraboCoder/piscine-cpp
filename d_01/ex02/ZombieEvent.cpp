/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:51:01 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 12:51:04 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
    std::cout << "ZombieEvent created...\n";
}

ZombieEvent::~ZombieEvent(void) {
    std::cout << "ZombieEvent destroyed...\n";
}

void ZombieEvent::setZombieType(std::string type) {
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    return new Zombie(name, this->type);
}

void ZombieEvent::randomChump(void) const{
    Zombie zombie("Tinyiko", this->type);
    zombie.annnounce();
}