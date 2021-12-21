/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:22:53 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/15 11:22:20 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

int checkDigit(const std::string str)
{
    size_t i;

    i = 0;
    while (i < str.size())
    {
        if (isdigit(str[i]))
        {
            std::cout << "Input is a number!" << std::endl;
            return (0);
        }
        i++;
    }
    return (1);
}