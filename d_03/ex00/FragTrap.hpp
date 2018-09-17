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
        static const int MaxHitPoints = 100;
        int energyPoints;
        static const int MaxEnergyPoints = 100;
        int level;
        std::string name;
        static const int MeleeAttackDamage = 30;
        static const int RangeAttackDamage = 20;
        static const int ArmorDamageReduction = 5;
};

#endif