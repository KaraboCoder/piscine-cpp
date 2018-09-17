/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:03:24 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/05 09:03:27 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

std::string Contact::getFirstName(void) {
    return this->firstName;
}

std::string Contact::getLastName(void) {
    return this->lastName;
}

std::string Contact::getNickname(void) {
    return this->nickName;
}

void Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    this->lastName = lastName;
}

void Contact::setLogin(std::string login) {
    this->login = login;
}

void Contact::setNickname(std::string nickname) {
    this->nickName = nickname;
}

void Contact::setUnderwearColor(std::string underwearColor) {
    this->underwearColor = underwearColor;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->darkestSecret = darkestSecret;
}

void Contact::setPostalAddress(std::string postal) {
    this->postalAddress = postal;
}

void Contact::setEmail(std::string email) {
    this->email = email;
}

void Contact::setPhone(std::string phone) {
    this->phone = phone;
}

void Contact::setBirthday(std::string birthday) {
    this->birthday = birthday;
}

void Contact::setFavouriteMeal(std::string meal) {
    this->favouriteMeal = meal;
}

void Contact::displayDetails(void) {
    std::cout << "Firstname: "<< this->firstName << std::endl;
    std::cout << "Lastname: "<< this->lastName << std::endl;
    std::cout << "Nickname: "<< this->nickName << std::endl;
    std::cout << "Login: "<< this->login << std::endl;
    std::cout << "Underwear Color: "<< this->underwearColor << std::endl;
    std::cout << "Darkest Secret: "<< this->darkestSecret << std::endl;
    std::cout << "Postal Address: "<< this->postalAddress << std::endl;
    std::cout << "Email: "<< this->email << std::endl;
    std::cout << "Phone: "<< this->phone << std::endl;
    std::cout << "Birthday: "<< this->birthday << std::endl;
    std::cout << "Favourite Meal: "<< this->favouriteMeal << std::endl;

}