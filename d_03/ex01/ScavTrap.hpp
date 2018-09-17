/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:41:08 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/08 13:41:11 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>

class ScavTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap&);
        ~ScavTrap(void);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void) const;
        void challengeNewcomer() const;
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