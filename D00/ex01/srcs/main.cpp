/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:57:01 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/16 09:12:38 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

int main(int ac, char **av)
{
    (void)av;
    std::string input;
    PhoneBook myPhoneBook;
    int i;

    if (ac > 1)
    {
        std::cout << "Sorry wrong amount of arguments!" << std::endl;
        return (1);
    }
    std::cout << "\n************** MY AWESOME PHONEBOOK ****************\n"
              << std::endl;
    i = 0;
    while (1)
    {
        std::cout << "----------------------------------------------------" << std::endl;
        std::cout << "Please enter an action to perform (ADD/SEARCH/EXIT):" << std::endl;
        std::getline(std::cin, input);
        if (!input.compare("EXIT"))
            break;
        else if (!input.compare("ADD"))
            myPhoneBook.addContact();
        else if (!input.compare("SEARCH"))
            myPhoneBook.displayBook();
        else
            std::cout << "This command does not exist!" << std::endl;
    }
}