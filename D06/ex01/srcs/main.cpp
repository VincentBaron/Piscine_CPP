/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:33:36 by vincentbaro       #+#    #+#             */
/*   Updated: 2022/01/06 20:18:01 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <stdint.h>

struct Data
{
	int val;
};

Data* deserialize(uintptr_t casted)
{
	Data *tmp;

	tmp = reinterpret_cast<Data *>(casted);
	return (tmp);
}

uintptr_t serialize(Data *ptr)
{
	uintptr_t newPtr = reinterpret_cast<uintptr_t>(ptr);
	return (newPtr);
}

int main(void)
{
	Data ptr;
	ptr.val = 8;
	Data *newPtr = 0;
	uintptr_t casted = 0;

	std::cout << "Pointer on Data structure: " << &ptr << std::endl;
	casted = serialize(&ptr);
	std::cout << "uint_ptr serialised pointer: "<< casted << std::endl;
	newPtr = deserialize(casted);
	std::cout << "Deserialized Pointer on Data structure: "<< newPtr << std::endl;
	std::cout << "Deserialized val in Data structure: "<< newPtr->val << std::endl;

	return 0;
}