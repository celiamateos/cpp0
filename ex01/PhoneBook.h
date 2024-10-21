/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:01:24 by cmateos-          #+#    #+#             */
/*   Updated: 2024/10/14 13:01:35 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_H
#define PHONEBOOK_H
 
#include "Contact.h"

class PhoneBook {
private:
    Contact contacts[8]; // Array to store up to 8 contacts
    int contactCount;    // Number of current contacts

public:
    PhoneBook();         // Constructor to initialize contactCount
    void addContact();   // Method to add a new contact
    void searchContact() const; // Method to search for a contact
};
 
#endif // PHONEBOOK_H

