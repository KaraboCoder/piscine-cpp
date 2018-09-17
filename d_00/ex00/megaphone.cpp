/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 08:44:59 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/05 08:45:05 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
    
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }else {
        for (int i = 1; i < argc; i++) {
            char *str = argv[i];
            for (int j = 0; j < std::strlen(str); j++) {
                putchar(std::toupper(str[j]));
            }
        }

        std::cout << std::endl;
    }
    return (0);
}
