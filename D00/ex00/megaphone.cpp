/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:54:42 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/16 09:24:44 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>


int main (int ac, char **av)
{

    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < ac; i++) {
        for (size_t j = 0; j < std::strlen(av[i]); j++)
            std::cout << char(std::toupper(av[i][j]));
    }
    std::cout << std::endl;
    return (0);
}