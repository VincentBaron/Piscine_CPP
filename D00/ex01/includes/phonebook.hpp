/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:53:24 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/16 11:11:56 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstring>

#define INFO_AMOUNT 5
#define CONTACTS_AMOUNT 4
#define NB_COLUMNS INFO_AMOUNT - 1
#define COL_WIDTH 10

class Contact
{

    public:

        // Constructors and destructor
        Contact(void);
        ~Contact(void);

        // Member functions
        int addString(const std::string str, const int type);
        int addNumber(const std::string name);
        void displayCol(const int f) const;
        void displayContact(void) const;

    private:

        std::string _firstName;
        std::string _secondName;
        std::string _nickName;
        std::string _number;
        std::string _darkestSecret;

};

class PhoneBook
{
    public:

        PhoneBook(void);
        ~PhoneBook(void);

        void addContact(void);
        void displayBook(void) const;
        
    private:

        Contact _contacts[8];
        int _contactsAmount;
}

int checkDigit(const std::string str);

#endif