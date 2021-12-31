/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 12:10:19 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/31 16:11:44 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/easyfind.hpp"
# include <iostream>
# include <cstdlib> 
# include <ctime> 
# include <vector>
# include <list>


void display(int i)
{
    std::cout << i << std::endl;
}

int main()
{
    srand(time(NULL));
    
    std::cout << "\n-------- Vector ---------- " << std::endl;
    std::vector<int> vect;
    vect.push_back(rand());
    vect.push_back(rand());
    vect.push_back(rand());
    vect.push_back(10);
    vect.push_back(rand());
    vect.push_back(rand());
    std::for_each(vect.begin(), vect.end(), display);
    std::cout << "\nFinding existing value: " << std::endl;
    std::cout << "Index of value: " << easyfind(vect, 10) << std::endl;

    std::cout << "\nFinding non-existing value: " << std::endl;
    try
    {
        easyfind(vect, 9);
    }
    catch (std::exception &e)
    {
        std::cout << "Can't find value" << std::endl;
    }


    std::cout << "\n-------- List ---------- " << std::endl;
    std::list<int> lst;
    lst.push_back(rand());
    lst.push_back(rand());
    lst.push_back(rand());
    lst.push_back(10);
    lst.push_back(rand());
    lst.push_back(rand());
    std::cout << "\nlst: " << std::endl;
    std::for_each(lst.begin(), lst.end(), display);
    std::cout << "\nFinding existing value: " << std::endl;
    std::cout << "Index of value: " << easyfind(lst, 10) << std::endl;
    std::cout << "\nFinding non-existing value: " << std::endl;
    try
    {
        easyfind(lst, 9);
    }
    catch (std::exception &e)
    {
        std::cout << "Can't find value" << std::endl;
    }

    return 0;
}