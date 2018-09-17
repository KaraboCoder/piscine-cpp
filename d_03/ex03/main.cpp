/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:58:39 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/08 11:58:41 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
    FragTrap f1("F1");
    FragTrap f2("F2");

    ScavTrap s1("S1");
    ScavTrap s2("S2");
    ScavTrap s3(s2);

    NinjaTrap n1("N1");
    s3.challengeNewcomer();

    f1.meleeAttack(f2.getName());
    f1.rangedAttack(f2.getName());
    f1.vaultHunter_dot_exe(f2.getName());
    f2.beRepaired(25);

    n1.controls(s2);
    n1.controls(f1);
    return 0;
}