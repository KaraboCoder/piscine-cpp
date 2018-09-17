/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:25:48 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/08 14:25:49 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    this->level = 1;
    this->energyPoints = 100;
    this->hitPoints = 100;
    std::cout << "ClapTraP: "<<this->name <<" created..."<<std::endl;

}

ClapTrap::ClapTrap(const ClapTrap & f) {
    this->energyPoints = f.energyPoints;
    this->hitPoints = f.hitPoints;
    this->level = f.level;
    this->name = f.name;
    std::cout<<"ClapTrap: " <<f.name <<" copied..."<<std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout <<"ClapTrap: "<< this->name<<" destroyed..."<<std::endl;
}

void ClapTrap::rangedAttack(std::string const & target) {
    if (this->hitPoints > 0)
        this->hitPoints -= this->RangeAttackDamage;
    std::cout << "FR4G-TP <" << this->name <<"> attacks " << target <<" at range, causing <" <<this->RangeAttackDamage << "> points of damage!" <<std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
    if (this->hitPoints > 0)
        this->hitPoints -= this->MeleeAttackDamage;
    std::cout << "FR4G-TP <" << this->name <<"> attacks " << target <<" at melee, causing <" <<this->MeleeAttackDamage << "> points of damage!" <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->energyPoints > 0)
        this->energyPoints -= amount;
    std::cout << this->name<<" Ouch!!!"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints < 100 )
        this->energyPoints += amount;
    if (this->hitPoints < 100)
        this->hitPoints += amount;
    std::cout <<this->name<<" repaired: It's nice to be back!"<<std::endl;
}

std::string ClapTrap::getName(void) const{
    return this->name;
}