/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:14:19 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/28 18:29:01 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
#include <iostream>

int main()
{
	Bureaucrat employee("Andre", 30);
	Intern someRandomIntern;
	AForm *myShrub = someRandomIntern.makeForm("shrubbery creation", "tree");
	RobotomyRequestForm robotize("robotEmployee");
	PresidentialPardonForm pres("Boboi");
	employee.executeForm(*myShrub);
	employee.signForm(*myShrub);
	employee.executeForm(*myShrub);

	employee.signForm(pres);

	Bureaucrat employee2("Bruno", 1);
	employee2.signForm(pres);
	employee.executeForm(pres);
	employee2.executeForm(pres);
	return (0);
}