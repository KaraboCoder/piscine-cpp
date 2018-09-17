/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:25:55 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/08 14:25:58 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
       public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap&);
        ~ClapTrap(void);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void) const;
    protected:
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