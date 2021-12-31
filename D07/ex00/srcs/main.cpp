/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 12:10:19 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/31 12:25:27 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/templates.hpp"
#include <iostream>

int main()
{

    std::cout << "--------- Int ----------" << std::endl;

    int a = 3;
    int b = 6;

    std::cout << "Original a: " << a << std::endl;
    std::cout << "Original b: " << b << std::endl;
    swap(a, b);
    std::cout << "New a: " << a << std::endl;
    std::cout << "New b: " << b << std::endl;

    std::cout << "Min is: " << min(a, b) << std::endl;
    std::cout << "Max is: " << max(a, b) << std::endl;

    std::cout << "--------- Char ----------" << std::endl;

    char c = 'c';
    char d = 'z';

    std::cout << "Original c: " << c << std::endl;
    std::cout << "Original d: " << d << std::endl;
    swap(c, d);
    std::cout << "New c: " << c << std::endl;
    std::cout << "New d: " << d << std::endl;

    std::cout << "Min is: " << min(c, d) << std::endl;
    std::cout << "Max is: " << max(c, d) << std::endl;


    std::cout << "--------- String ----------" << std::endl;

    std::string e = "Hello";
    std::string f = "world";

    std::cout << "Original e: " << e << std::endl;
    std::cout << "Original f: " << f << std::endl;
    swap(e, f);
    std::cout << "New e: " << e << std::endl;
    std::cout << "New f: " << f << std::endl;

    std::cout << "Min is: " << min(e, f) << std::endl;
    std::cout << "Max is: " << max(e, f) << std::endl;

    return 0;
}