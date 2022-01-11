/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 12:10:19 by vbaron            #+#    #+#             */
/*   Updated: 2022/01/10 15:04:52 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>

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

	std::cout << "\n-------- Map ---------- " << std::endl;
	std::map<int, int> map;
	map.insert(std::pair<int, int>(0, rand()));
	map.insert(std::pair<int, int>(1, rand()));
	map.insert(std::pair<int, int>(2, 10));
	map.insert(std::pair<int, int>(3, rand()));
	map.insert(std::pair<int, int>(4, rand()));
	std::cout << "\nmap: " << std::endl;
	for (std::map<int, int>::const_iterator it = map.begin();
		 it != map.end(); ++it)
	{
		std::cout << it->first << " " << it->second << "\n";
	}
	std::cout << "\nFinding existing value: " << std::endl;
	std::cout << "Index of value: " << easyfind(map, 10) << std::endl;
	std::cout << "\nFinding non-existing value: " << std::endl;
	try
	{
		easyfind(map, 9);
	}
	catch (std::exception &e)
	{
		std::cout << "Can't find value" << std::endl;
	}

	std::cout << "\n-------- MultiMap ---------- " << std::endl;
	std::multimap<int, int> multiMap;
	multiMap.insert(std::pair<int, int>(0, rand()));
	multiMap.insert(std::pair<int, int>(1, rand()));
	multiMap.insert(std::pair<int, int>(2, 10));
	multiMap.insert(std::pair<int, int>(3, rand()));
	multiMap.insert(std::pair<int, int>(4, rand()));
	std::cout << "\nmultiMap: " << std::endl;
	for (std::multimap<int, int>::const_iterator it = multiMap.begin();
		 it != multiMap.end(); ++it)
	{
		std::cout << it->first << " " << it->second << "\n";
	}
	std::cout << "\nFinding existing value: " << std::endl;
	std::cout << "Index of value: " << easyfind(multiMap, 10) << std::endl;
	std::cout << "\nFinding non-existing value: " << std::endl;
	try
	{
		easyfind(multiMap, 9);
	}
	catch (std::exception &e)
	{
		std::cout << "Can't find value" << std::endl;
	}

	return 0;
}
