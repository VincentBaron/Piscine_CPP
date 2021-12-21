/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:12:39 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/15 18:25:00 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void) {}

int Contact::addString(const std::string str, const int type)
{
    std::string *stringTypes[4] = {&this->_firstName, &this->_secondName, &this->_nickName, &this->_darkestSecret};

    if (!str.size())
    {
        std::cout << "Input is empty!" << std::endl;
        return (0);
    }
    if (!checkDigit(str))
        return (0);
    *stringTypes[type] = str;
    return (1);
}

int Contact::addNumber(const std::string str)
{
    int value;
    if (!str.size())
    {
        std::cout << "Input is empty!" << std::endl;
        return (0);
    }
    if (str.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout << "Non numeric value found in input!" << std::endl;
        return (0);
    }
    this->_number = str;
    return (1);
}

void Contact::displayCol(const int f) const
{
    int offset;
    std::string stringTypes[4] = {this->_firstName, this->_secondName, this->_nickName};

    offset = COL_WIDTH - stringTypes[f - 1].size();
    // std::cout << "offset" << offset << std::endl;
    // std::cout << "size: " << stringTypes[f - 1].size() << std::endl;
    // return ;
    if (offset < 0)
    {
        std::cout << stringTypes[f - 1].substr(0, stringTypes[f - 1].size() + offset - 1);
        std::cout << ".";
    }
    else
    {
        for (int i = 0; i < offset; i++)
            std::cout << " ";
        std::cout << stringTypes[f - 1];
    }
    std::cout << "|";
    return;
}

void Contact::displayContact(void) const
{
    std::string infos[INFO_AMOUNT] = {this->_firstName, this->_secondName, this->_nickName, this->_number, this->_darkestSecret};
    
    for (int i = 0; i < INFO_AMOUNT; i++)
        std::cout << infos[i] << std::endl;
}