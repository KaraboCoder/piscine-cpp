/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:47:24 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 10:47:27 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void ponyOnTheHeap() {
    Pony* pony = new Pony("Pinky", "Pink");
    pony->details();
    return;
}

void ponyOnTheStack() {
    Pony pony("Reddy", "Brown");
    pony.details();
    return;
}

int main(void) {
    ponyOnTheHeap();
    std::cout<<std::endl;
    ponyOnTheStack();
    return 0;
}