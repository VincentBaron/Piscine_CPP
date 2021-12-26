/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:53:12 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 12:58:43 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

int main()
{
    Animal *array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        if (i % 2 == 0)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }

    std::cout << "\n-- Proof that half of the array is Dog and half is cat ---\n" << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "array[" << i << "] sound is: ";
        array[i]->makeSound();
    }
    std::cout << "\n-----------------------------------------------------------" << std::endl;
    for (int i = 0; i < SIZE; i++)
        delete array[i];

    std::cout << "\n-- Proof that copy is deep---\n" << std::endl;
    Cat *srcs_cat = new Cat();
    Cat copy_cat(*srcs_cat);
    std::cout << "srcs_cat: " << std::endl;
    srcs_cat->getBrain()->displayIdeas();
    std::cout << "copy_cat: " << std::endl;
    copy_cat.getBrain()->displayIdeas();
    std::cout << "srcs_cat ideas changed" << std::endl;
    srcs_cat->getBrain()->setIdeas("Actually humans are cool");
    std::cout << "srcs_cat: " << std::endl;
    srcs_cat->getBrain()->displayIdeas();
    std::cout << "copy_cat: " << std::endl;
    copy_cat.getBrain()->displayIdeas();
    delete srcs_cat;
}