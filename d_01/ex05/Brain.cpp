/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:38:52 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 14:38:54 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(int size, int iq) {
    this->size = size;
    this->IQ= iq;
}

Brain::~Brain(void) {
    std::cout << "Brains destroyed\n";
}

int Brain::getSize(void) const {
    return this->size;
}

int Brain::getIQ(void) const {
    return this->IQ;
}

void Brain::setSize(int size) {
    this->size = size;
}

void Brain::setIQ(int iq) {
    this->IQ = iq;
}

std::string Brain::identify(void) const{
    char hex[] = "0x000000000000";
    sprintf(hex, "%p", this);
    return std::string(hex);
}