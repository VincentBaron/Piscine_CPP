/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:14:19 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/27 18:42:23 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include <iostream>

int main()
{
	Bureaucrat bureaucrat("Andre", 3);
	Form basicForm("EasyForm", 5, 10);
	std::cout << basicForm << std::endl;
	try
	{
		basicForm.beSigned(bureaucrat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << basicForm << std::endl;

	Form hardForm("HardForm", 1, 10);
	std::cout << hardForm << std::endl;
	try
	{
		hardForm.beSigned(bureaucrat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << hardForm << std::endl;
	try
	{
		bureaucrat.signForm(basicForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		bureaucrat.signForm(hardForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}