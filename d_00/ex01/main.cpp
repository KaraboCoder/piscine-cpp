/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:03:38 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/05 09:03:46 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

std::string getCommand(void) {
    std::string cmd;
    std::cin >> cmd;
    return cmd;
}

Contact createContact(void) {
    Contact contact;
    std::string input;

    std::cout << "Enter firstName: ";
    std::cin >> input;
    contact.setFirstName(input);

    std::cout << "Enter lastName: ";
    std::cin >> input;
    contact.setLastName(input);

    std::cout << "Enter nickName: ";
    std::cin >> input;
    contact.setNickname(input);

    std::cout << "Enter Login: ";
    std::cin >> input;
    contact.setLogin(input);

    std::cout << "Enter Darkest Secret: ";
    std::cin >> input;
    contact.setDarkestSecret(input);

    std::cout << "Enter Underwear Color: ";
    std::cin >> input;
    contact.setUnderwearColor(input);

    std::cout << "Enter Postal Address: ";
    std::cin >> input;
    contact.setPostalAddress(input);
    
    std::cout << "Enter Email: ";
    std::cin >> input;
    contact.setEmail(input);

    std::cout << "Enter Phone: ";
    std::cin >> input;
    contact.setPhone(input);

    std::cout << "Enter Birthday: ";
    std::cin >> input;
    contact.setBirthday(input);

    std::cout << "Enter Favourite Meal: ";
    std::cin >> input;
    contact.setFavouriteMeal(input);
    return contact;
}

std::string truncateOutput(std::string output) {
    std::string truncated;
    if (output.length() <= 10)
        return output;
    for (int i = 0; i < 9; i++) {
        truncated.append(output.substr(i, 1));
    }
    truncated.append(".");
    return truncated;
}

void displayContacts(Contact contacts[8], int phoneBookLength) {
    
    std::cout << std::setw(10) << std::right << "Index" <<  "|";
    std::cout << std::setw(10) << std::right << "FirstName" << "|";
    std::cout << std::setw(10) << std::right << "LastName" << "|";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl << std::endl;

    for(int i = 0; i < phoneBookLength; i++) {
        std::cout << std::setw(10) << std::right << i<<  "|";
        std::cout << std::setw(10) << std::right << truncateOutput(contacts[i].getFirstName()) <<  "|";
        std::cout << std::setw(10) << std::right << truncateOutput(contacts[i].getLastName()) <<  "|";
        std::cout << std::setw(10) << std::right << truncateOutput(contacts[i].getNickname()) << std::endl;
    }
}

void searchContact(Contact contacts[8], int phoneBookLength, int index) {
    if (index < phoneBookLength) {
        std::cout << std::endl;
        contacts[index].displayDetails();
        std::cout << std::endl;
    }else{
        std::cout << "Contact not found\n\n";
    }
}

int main(void) {
    std::string command;
    Contact contacts[8];
    int phoneBookLength = 0;

    while(1) {
        std::cout << "Please Enter Command. \n\"ADD\" or \"SEARCH\" or \"EXIT\"\n";
        command = getCommand();
        if (command.compare("EXIT") == 0)
            return 0;
        if (command.compare("ADD") == 0) {
            if (phoneBookLength <= 7) {
                Contact contact;
                contact = createContact();
                contacts[phoneBookLength] = contact;
                phoneBookLength++;
            }else {
                std::cout << "Phonebook memory is full. You cannot add new contacts.\n\n";
            }
        }
        if (command.compare("SEARCH") == 0) {
            std::string index;
            if (phoneBookLength == 0) {
                std::cout << "NO CONTACTS" <<std::endl;
                continue;
            }
            displayContacts(contacts, phoneBookLength);
            std::cout << std::endl << std::endl;
            std::cout << "Please Enter Index of Contact to Search: ";
            std::cin >> index;
            try {
                searchContact(contacts, phoneBookLength, std::stoi(index));
            }catch(const std::exception& e){
                std::cout << "\n\nInvalid input\n\n";
            }
        }
        
    }
}