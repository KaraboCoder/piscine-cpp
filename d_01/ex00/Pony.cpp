/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:46:52 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 10:46:56 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, std::string color) {
    this->name = name;
    this->color = color;
}

Pony::Pony(const Pony &oldPony) {
    this->name = oldPony.name;
    this->color = oldPony.color;
}

void Pony::details(void) const{
    std::cout << "Name: " << this->name << "\nColor: " << this->color << std::endl;
}

Pony::~Pony(void) {
    std::cout << "Pony destroyed...\n";
}