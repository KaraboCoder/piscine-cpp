/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:59:03 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/08 11:59:05 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <time.h>
#include <stdlib.h>

FragTrap::FragTrap(std::string name) {
    this->name = name;
    this->level = 1;
    this->energyPoints = 100;
    this->hitPoints = 100;
    this->MeleeAttackDamage = 30;
    this->RangeAttackDamage = 20;
    this->ArmorDamageReduction = 5;
    this->MaxEnergyPoints = 100;
    this->MaxHitPoints = 100;
    std::cout <<this->name <<" created..."<<std::endl;

}

FragTrap::FragTrap(const FragTrap & f) {
    this->energyPoints = f.energyPoints;
    this->hitPoints = f.hitPoints;
    this->level = f.level;
    std::cout <<f.name <<" copied to "<< this->name<<std::endl;
    this->name = f.getName();
}

FragTrap::~FragTrap(void) {
    std::cout << this->name<<" destroyed..."<<std::endl;
}

void FragTrap::rangedAttack(std::string const & target) {
    if (this->hitPoints > 0)
        this->hitPoints -= this->RangeAttackDamage;
    std::cout << "FR4G-TP <" << this->name <<"> attacks " << target <<" at range, causing <" <<this->RangeAttackDamage << "> points of damage!" <<std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
    if (this->hitPoints > 0)
        this->hitPoints -= this->MeleeAttackDamage;
    std::cout << "FR4G-TP <" << this->name <<"> attacks " << target <<" at melee, causing <" <<this->MeleeAttackDamage << "> points of damage!" <<std::endl;
}

void FragTrap::vaultHunter_dot_exe(std::string const & target) {
    std::string attacks[] = {"Tinyiko", "Fly Kick", "Upper Cut", "Kiss", "Shout"};
    srand(time(NULL));    
    int i = rand()%5;
    if (this->energyPoints > 0) this->energyPoints -= 25;
    std::cout << "VaulHunter launches "<< attacks[i] <<" attack on " << target <<", causing <" << 25 << "> points of damage!" <<std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    if (this->energyPoints > 0)
        this->energyPoints -= amount;
    std::cout << this->name<<" Ouch!!!"<<std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints < 100 )
        this->energyPoints += amount;
    if (this->hitPoints < 100)
        this->hitPoints += amount;
    std::cout <<this->name<<" repaired: It's nice to be back!"<<std::endl;
}

std::string FragTrap::getName(void) const{
    return this->name;
}