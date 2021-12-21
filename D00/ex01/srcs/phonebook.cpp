/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:41:59 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/17 10:45:43 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    this->_contactsAmount = 0;
}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::addContact(void)
{
    std::string input;
    Contact user;
    int i;

    std::string questions[INFO_AMOUNT] = {
        "Please enter Contact FirstName:",
        "Please enter Contact SecondName:",
        "Please enter Contact NickNameName:",
        "Please enter Contact Number:",
        "Please Enter Contact Darkest secret",
    };

    if (this->_contactsAmount >= CONTACTS_AMOUNT)
    {
        std::cout << "Already " << this->_contactsAmount << " contacts!" << std::endl;
        return;
    }
    i = 0;
    while (i < INFO_AMOUNT)
    {
        std::cout << questions[i] << std::endl;
        getline(std::cin, input);
        if (i < 3)
            if (!user.addString(input, i))
                return;
        if (i == 3)
            if (!user.addNumber(input))
                return;
        if (i == 4)
            if (!user.addString(input, i - 1))
                return;
        i++;
    }
    this->_contacts[this->_contactsAmount] = user;
    this->_contactsAmount++;
}

void PhoneBook::displayBook(void) const
{
    int i;
    int f;
    size_t offset;
    std::string input;

    std::string col_names[NB_COLUMNS] = {
        "index",
        "first name",
        "last name",
        "nickname",
    };

    i = 0;
    while (i < NB_COLUMNS)
    {
        offset = COL_WIDTH - col_names[i].size();
        for (size_t i = 0; i < offset; i++)
            std::cout << " ";
        std::cout << col_names[i];
        std::cout << "|";
        i++;
    }
    std::cout << std::endl;
    i = 0;
    while (i < this->_contactsAmount)
    {
        f = 0;
        while (f < NB_COLUMNS)
        {
            if (!f)
            {
                for (size_t i = 0; i < 9; i++)
                    std::cout << " ";
                std::cout << i;
                std::cout << "|";
            }
            else
                this->_contacts[i].displayCol(f);
            f++;
        }
        std::cout << std::endl;
        i++;
    }
    std::cout << "Which index would you like to access?" << std::endl;
    getline(std::cin, input);
    if (std::stoi(input) < 0 || std::stoi(input) > this->_contactsAmount)
    {
        std::cout << "yalaa" << std::endl;
        std::cout << "The provided index does not exist!" << std::endl;
        return ;
    }
    this->_contacts[std::stoi(input)].displayContact();

}