/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 17:33:05 by vbaron            #+#    #+#             */
/*   Updated: 2022/01/11 17:31:38 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <iostream>

int main()
{
    std::cout << "\n------- Basic test -------" << std::endl;
    Span sp = Span(6);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n------- Copy contructor -------" << std::endl;
    Span sp2(sp);
    sp.addNumber(42);
    std::cout << "sp: " << std::endl;
    sp.display();
    std::cout << "sp2: " << std::endl;
    sp2.display();

    std::cout << "\n------- AddNumber execption -------" << std::endl;
    try
    {
        sp.addNumber(100);
    }
    catch(const std::exception& e)
    {
        std::cout << "Vector is already full!" << std::endl;
    }
	std::cout << "\n------- Adding numbers using iterators -------" << std::endl;
	Span spBig = Span (1000);
	std::vector<int> v(1000, 5);
	spBig.addIte(v.begin(), v.end());
	spBig.display();
    return (0);
}