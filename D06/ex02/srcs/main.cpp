/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:19:27 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/30 19:47:18 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Base.hpp"
# include <cstdlib>
# include <iostream>
# include <ctime>

Base::~Base(void) {};

Base* generate(void)
{
	srand(time(NULL));
	int randNum = (rand() % 3);
	std::cout << "The cast index (0:A, 1:B, 2:C): " << randNum << std::endl;
	if (randNum == 0)
		return (new A());
	else if (randNum == 1)
		return (new B());
	else
		return (new C());
}

void identify_ptr(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "From ptr: A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "From ptr: B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "From ptr: C" << std::endl;
}

void identify_ref(Base &p)
{
	Base identifier;

	try
	{
		identifier = dynamic_cast<A&>(p);
		std::cout << "From ref: A" << std::endl;
	}
	catch(const std::bad_cast err) {}
	try
	{
		identifier = dynamic_cast<B&>(p);
		std::cout << "From ref: B" << std::endl;
	}
	catch(const std::bad_cast err) {}
	try
	{
		identifier = dynamic_cast<C&>(p);
		std::cout << "From ref: C" << std::endl;
	}
	catch(const std::bad_cast err) {}

	
}

int main()
{
	Base *ptr = generate();
	identify_ptr(ptr);
	identify_ref(*ptr);
	delete ptr;
	return 0;
}