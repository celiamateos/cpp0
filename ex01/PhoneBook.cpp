/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:02:53 by cmateos-          #+#    #+#             */
/*   Updated: 2024/10/14 13:02:57 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream>
#include "PhoneBook.h"

PhoneBook::PhoneBook() : contactCount(0) {}
 
void PhoneBook::addContact()
{
    Contact newContact;
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkestSecret);

    // Check for empty fields
    if (firstName.empty() || lastName.empty() || nickname.empty() ||
        phoneNumber.empty() || darkestSecret.empty()) {
        std::cout << "All fields must be filled!" << std::endl;
        return;
    }

    newContact.setDetails(firstName, lastName, nickname, phoneNumber, darkestSecret);
    
    // Replace the oldest contact if contact count exceeds 8
    if (contactCount < 8) {
        contacts[contactCount] = newContact;
        contactCount++;
    } else {
        // Shift contacts left to make room for the new one
        for (int i = 1; i < 8; i++) {
            contacts[i - 1] = contacts[i];
        }
        contacts[7] = newContact; // Add new contact at the end
    }
}


void PhoneBook::searchContact() const {
    std::cout << std::setw(10) << "Index"
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "Nickname"
              << std::endl;

    for (int i = 0; i < contactCount; i++) {
        std::cout << std::setw(10) << i
                  << "|" << std::setw(10) << contacts[i].getFirstName().substr(0, 9) + (contacts[i].getFirstName().length() > 9 ? "." : "")
                  << "|" << std::setw(10) << contacts[i].getLastName().substr(0, 9) + (contacts[i].getLastName().length() > 9 ? "." : "")
                  << "|" << std::setw(10) << contacts[i].getNickname().substr(0, 9) + (contacts[i].getNickname().length() > 9 ? "." : "")
                  << std::endl;
    }

    std::string input;
    int index = -1;

    while (true) {
        std::cout << "Enter the index of the contact to view: ";
        std::getline(std::cin, input);  // Leer la entrada como cadena

        std::stringstream ss(input);    // Convertir la cadena a un flujo de texto
        if (!(ss >> index)) {           // Intentar convertir a entero
            std::cout << "Invalid input, please enter a number." << std::endl;
            continue;
        }

        if (index < 0 || index >= contactCount) {
            std::cout << "Invalid index!" << std::endl;
        } else {
            std::cout << "Contact Details:\n";
            std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
            std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
            std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
            std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
            std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
            break;
        }
    }
}