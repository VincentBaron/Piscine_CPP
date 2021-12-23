/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:53:12 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/23 13:03:05 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

int main()
{
    Animal* array[SIZE] = {new Dog()};
    
    // for (int i = 0; i < SIZE; i++)
    // {
    //     if (i % 2 == 0)
    //         array[i] = Dog();
    //     else
    //         array[i] = Cat();
    // }
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "array[" << i << "] sound is: "; 
        array[i]->makeSound();
    }
}