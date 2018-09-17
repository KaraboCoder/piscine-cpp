/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:50:32 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 12:50:38 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
    this->name = name;
    this->type = type;
}

Zombie::~Zombie(void) {
    std::cout<<this->name<<" destroyed\n";
}

void Zombie::annnounce(void) const{
    std::cout<<"<"<<this->name<<" ("<<this->type<<")> Braiiiiiinnnssss...\n";
}
