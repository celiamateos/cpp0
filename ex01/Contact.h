/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:37:02 by cmateos-          #+#    #+#             */
/*   Updated: 2024/10/14 12:37:03 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_H
#define CONTACT_H

#include <string>
 
class Contact
{
    private:
        std::string firstName;  // First name of the contact
        std::string lastName;   // Last name of the contact
        std::string nickname;    // Nickname of the contact
        std::string phoneNumber; // Phone number of the contact
        std::string darkestSecret; // Darkest secret of the contact

    public:
        // Method to set the details of the contact
        void setDetails(const std::string& first, const std::string& last,
                        const std::string& nick, const std::string& phone,
                        const std::string& secret);
        
        // Getters for contact details
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;

        // Check if any field is empty
        bool isEmpty() const;
};
 
#endif  