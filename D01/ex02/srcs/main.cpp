/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:22:27 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/16 14:31:22 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "Address of string:      " << &string << std::endl;
    std::cout << "Address from stringPTR: " << stringPTR << std::endl;
    std::cout << "Address from stringREF: " << &stringREF << std::endl;
    std::cout << "String from stringPTR:  " << *stringPTR << std::endl;
    std::cout << "String from stringREF:  " << stringREF << std::endl;
    return (0);
}