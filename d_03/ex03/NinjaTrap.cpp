/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:11:54 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/08 15:11:56 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name){
    std::cout << "NinjaTrap: created..." <<std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap & n) : ClapTrap(n) {
    std::cout << "NinjaTrap: Super Merged!!!"<<std::endl;
}

NinjaTrap::~NinjaTrap(void) {
    std::cout<<"NinjaTrap: destroyed..."<<std::endl;
}

void NinjaTrap::controls(FragTrap & f){
    std::cout << "NinjaTrap: I'm name is " << f.getName() << std::endl;
    f.meleeAttack("Karabo");
    f.rangedAttack("RandomPerson");
    f.beRepaired(2);
}

void NinjaTrap::controls(ScavTrap & s){
    std::cout << "NinjaTrap: I'm name is " << s.getName() << std::endl;
    s.meleeAttack("Karabo");
    s.rangedAttack("RandomPerson");
    s.beRepaired(2);
}