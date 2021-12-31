/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:24:00 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/31 14:11:26 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Array.tpp"
#include <iostream>
#include <cstdlib> 
#include <ctime> 
#define SIZE 3

int main(int, char**)
{
    srand(time(NULL));
    
    std::cout << "\nDefault constructor:" << std::endl;
    Array<int> array;
    std::cout << array.size() << std::endl;
    for (unsigned int i = 0; i < array.size(); i++)
        std::cout << "Array: " << array[i] << std::endl;

    std::cout << "\nConstruction with parameter:" << std::endl;
    Array<int> array2(SIZE);
    std::cout << array2.size() << std::endl;
    for (unsigned int i = 0; i < array2.size(); i++)
        std::cout << "array2: " << array2[i] << std::endl;
    for (unsigned int i = 0; i < array2.size(); i++)
        array2[i] = rand();
    std::cout << "array2 filled: " << std::endl;
    for (unsigned int i = 0; i < array2.size(); i++)
        std::cout << "array2: " << array2[i] << std::endl;

    std::cout << "\nConstruction by copy" << std::endl;
    Array<int> copy(array2);
    for (unsigned int i = 0; i < copy.size(); i++)
        std::cout << "copy: " << copy[i] << std::endl;
    std::cout << "Changing first value of array2" << std::endl;
    array2[0] = 42;
    for (unsigned int i = 0; i < array2.size(); i++)
        std::cout << "array2: " << array2[i] << std::endl;
    for (unsigned int i = 0; i < copy.size(); i++)
        std::cout << "copy: " << copy[i] << std::endl;
    
    std::cout << "\n Trying to access out-of-range value in array: " << std::endl;
    try
    {
        array2[-1];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
        try
    {
        array2[3];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    
}