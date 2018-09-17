/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:50:32 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 13:52:16 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "New Zombie created...\n";
}

Zombie::~Zombie(void) {
    std::cout<<this->name<<" destroyed\n";
}

void Zombie::setType(std::string type) {
    this->type = type;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::annnounce(void) const{
    std::cout<<"<"<<this->name<<" ("<<this->type<<")> Braiiiiiinnnssss...\n";
}
