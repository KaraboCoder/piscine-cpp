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

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->MeleeAttackDamage = 30;
    this->RangeAttackDamage = 20;
    this->ArmorDamageReduction = 5;
    this->MaxEnergyPoints = 100;
    this->MaxHitPoints = 100;
    std::cout <<"FragTrap: "<<this->getName() <<" created..."<<std::endl;
}

FragTrap::FragTrap(const FragTrap & f) : ClapTrap(f){
    std::cout <<"FragTrap: "<<f.getName() <<" copied to "<< this->getName()<<std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout <<"FragTrap: "<< this->getName()<<" destroyed..."<<std::endl;
}

void FragTrap::vaultHunter_dot_exe(std::string const & target) {
    std::string attacks[] = {"Tinyiko", "Fly Kick", "Upper Cut", "Kiss", "Shout"};
    srand(time(NULL));    
    int i = rand()%5;
    if (this->energyPoints > 0) this->energyPoints -= 25;
    std::cout << "VaulHunter launches "<< attacks[i] <<" attack on " << target <<", causing <" << 25 << "> points of damage!" <<std::endl;
}