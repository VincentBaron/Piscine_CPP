/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:06:07 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/20 13:32:28 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

int check_is_int(std::string str)
{
    size_t i;

    i = 0;
    while (i < str.size())
    {
        if (str[i] < '0' || str[i] > '9')
            return(0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    Karen karen;
    
    if (ac != 2)
    {
        std::cerr << "Error, wrong amount of arguments!" << std::endl;
        return (1);
    }
    karen.complain(av[1]);
    return (0);
}