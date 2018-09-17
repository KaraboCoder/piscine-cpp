/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:41:01 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/08 13:41:03 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <time.h>
#include <stdlib.h>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->MeleeAttackDamage = 20;
    this->RangeAttackDamage = 15;
    this->ArmorDamageReduction = 3;
    this->MaxEnergyPoints = 50;
    this->MaxHitPoints = 100;
    std::cout<<"ScavTrap: " <<this->name <<": I'm ready for a challenge..."<<std::endl;

}

ScavTrap::ScavTrap(const ScavTrap & f) : ClapTrap(f){
    std::cout <<"ScavTrap: Super Merge!!!"<<std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout <<"ScavTrap: "<< this->name<<": destroyed..."<<std::endl;
}

void ScavTrap::challengeNewcomer()const {
    std::string challenges[] = {"Need for Speed", "Sneak", "Upper Cut", "Storm", "Shout"};
    srand(time(NULL));
    int i = rand()%5;
    std::cout << this->getName() << ": I accept " << challenges[i] << " challenge!" <<std::endl;
}