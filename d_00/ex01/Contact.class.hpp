/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:03:07 by kngwato           #+#    #+#             */
/*   Updated: 2018/06/05 09:03:10 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string login;
        std::string underwearColor;
        std::string darkestSecret;
        std::string postalAddress;
        std::string email;
        std::string phone;
        std::string birthday;
        std::string favouriteMeal;

    public:
        //SETTERS

        void setFirstName(std::string);
        void setLastName(std::string);
        void setNickname(std::string);
        void setLogin(std::string);
        void setUnderwearColor(std::string);
        void setDarkestSecret(std::string);
        void setPostalAddress(std::string);
        void setEmail(std::string);
        void setPhone(std::string);
        void setBirthday(std::string);
        void setFavouriteMeal(std::string);



        //GETTERS
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        void displayDetails(void);
};

#endif