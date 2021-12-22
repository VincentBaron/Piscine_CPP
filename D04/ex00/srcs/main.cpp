/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:53:12 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/22 22:22:53 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "Wrong animal output :\n" << std::endl;
    const WrongAnimal *metax = new WrongAnimal();
    const WrongAnimal *ix = new WrongCat();
    std::cout << ix->getType() << " " << std::endl;
    ix->makeSound(); //will output the cat sound!
    metax->makeSound();
}