/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:39:32 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 14:39:34 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int main(void) {
    Human bob;
    std::cout << bob.identify() <<std::endl;
    std::cout << bob.getBrain()->identify() << std::endl;
    return 0;
}