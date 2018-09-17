/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:59:12 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/08 11:59:14 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap {
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap&);
        ~FragTrap(void);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaultHunter_dot_exe(std::string const & target);
        std::string getName(void) const;
    private:
        int hitPoints;
        int MaxHitPoints;
        int energyPoints;
        int MaxEnergyPoints;
        int level;
        std::string name;
        int MeleeAttackDamage;
        int RangeAttackDamage;
        int ArmorDamageReduction;
};

#endif