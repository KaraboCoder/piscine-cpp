/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:51:23 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 12:51:25 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void createZombieOnStack() {
    Zombie zombie("StackZombie", "Female");
    zombie.annnounce();
}

int main(void) {
    createZombieOnStack();
    ZombieEvent zombieEvent;
    zombieEvent.setZombieType("Male");
    Zombie* zombie = zombieEvent.newZombie("MainZombie");
    zombie->annnounce();
    zombieEvent.randomChump();
    delete zombie;
    return 0;
}