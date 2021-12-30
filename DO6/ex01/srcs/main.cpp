/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:33:36 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/30 15:39:11 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int val;
};

Data* deserialize(std::uintptr_t casted)
{
	Data *tmp;

	tmp = reinterpret_cast<Data *>(casted);
	return (tmp);
}

std::uintptr_t serialize(Data *ptr)
{
	std::uintptr_t newPtr = reinterpret_cast<std::uintptr_t>(ptr);
	return (newPtr);
}

int main(void)
{
	Data ptr;
	ptr.val = 8;
	Data *newPtr = 0;
	std::uintptr_t casted = 0;

	std::cout << "Pointer on Data structure: " << &ptr << std::endl;
	casted = serialize(&ptr);
	std::cout << "uint_ptr serialised pointer: "<< casted << std::endl;
	newPtr = deserialize(casted);
	std::cout << "Deserialized Pointer on Data structure: "<< newPtr << std::endl;
	std::cout << "Deserialized val in Data structure: "<< newPtr->val << std::endl;

	return 0;
}