/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:50:47 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 12:50:49 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie{
    public:
        Zombie(std::string, std::string);
        ~Zombie();
        void annnounce() const;
    private:
        std::string type;
        std::string name;
};

#endif
