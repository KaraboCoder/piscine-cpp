/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:39:14 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 14:39:15 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

Human::Human(void) {
    this->brain = new Brain(0,0);
}

void Human::setName(std::string name) {
    this->name = name;
}

void Human::setAge(int age) {
    this->age = age;
}

std::string Human::getName(void) const{
    return this->name;
}

int Human::getAge(void) const{
    return this->age;
}

const Brain* Human::getBrain(void) const{
    return brain;
}

std::string Human::identify()const {
    return this->brain->identify();
}