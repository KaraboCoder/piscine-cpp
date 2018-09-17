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

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    this->level = 1;
    this->energyPoints = 50;
    this->hitPoints = 100;
    this->MeleeAttackDamage = 20;
    this->RangeAttackDamage = 15;
    this->ArmorDamageReduction = 3;
    this->MaxEnergyPoints = 50;
    this->MaxHitPoints = 100;
    std::cout <<this->name <<": I'm ready for a challenge..."<<std::endl;

}

ScavTrap::ScavTrap(const ScavTrap & f) {
    this->energyPoints = f.energyPoints;
    this->hitPoints = f.hitPoints;
    this->level = f.level;
    std::cout <<f.name <<" merges with "<< this->name << "! Super!!"<<std::endl;
    this->name = f.getName();
}

ScavTrap::~ScavTrap(void) {
    std::cout << this->name<<": That's was nice..."<<std::endl;
}

void ScavTrap::rangedAttack(std::string const & target) {
    if (this->hitPoints > 0)
        this->hitPoints -= this->RangeAttackDamage;
    std::cout << "FR4G-TP <" << this->name <<"> attacks " << target <<" at range, causing <" <<this->RangeAttackDamage << "> points of damage!" <<std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
    if (this->hitPoints > 0)
        this->hitPoints -= this->MeleeAttackDamage;
    std::cout << "FR4G-TP <" << this->name <<"> attacks " << target <<" at melee, causing <" <<this->MeleeAttackDamage << "> points of damage!" <<std::endl;
}

void ScavTrap::challengeNewcomer()const {
    std::string challenges[] = {"Need for Speed", "Sneak", "Upper Cut", "Storm", "Shout"};
    srand(time(NULL));
    int i = rand()%5;
    std::cout << this->getName() << ": I accept " << challenges[i] << " challenge!" <<std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (this->energyPoints > 0)
        this->energyPoints -= amount;
    std::cout << this->name<<" Ouch!!!"<<std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints < 100 )
        this->energyPoints += amount;
    if (this->hitPoints < 100)
        this->hitPoints += amount;
    std::cout <<this->name<<" repaired: It's nice to be back!"<<std::endl;
}

std::string ScavTrap::getName(void) const{
    return this->name;
}