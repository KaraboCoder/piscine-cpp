/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:27:01 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/06 14:27:03 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string &strRef = str;
    std::string *strPtr = &str;
    std::cout << strRef <<std::endl;
    std::cout << *strPtr <<std::endl;
    return 0;
}