/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:12:04 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/08 15:12:06 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
    public:
        NinjaTrap(std::string name);
        NinjaTrap(const NinjaTrap&);
        ~NinjaTrap(void);
        void controls(FragTrap &);
        void controls(ScavTrap &);
};

#endif