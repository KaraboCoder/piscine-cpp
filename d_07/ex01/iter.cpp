/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <kngwato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:39:27 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/14 15:09:15 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void printValue(T const & el) {
    std::cout << el << std::endl;
}

template<typename T>
void iter(T arr[], int len, void(*func)(T const & el)) {
    for(int i = 0; i < len; i++)
    {
        func(arr[i]);
    }
}

int main(void) {
    int arr[3] = {1, 2, 3};
    iter<int>(arr, 3, printValue);

    std::string strArr[3] = {"Name", "Surname", "Nickname"};
    iter<std::string>(strArr, 3, printValue);
    return 0;
}