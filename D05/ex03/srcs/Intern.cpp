/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:50:12 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/28 18:33:15 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Intern.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern(void) 
{

	return ;
}

Intern::Intern(const Intern &srcs) 
{
	*this = srcs;
	return ;
}

Intern::~Intern(void) 
{

	return ;
}

Intern	&Intern::operator=(const Intern &rhs) 
{

	if (this == &rhs)
		return (*this);
	return (*this);
}


AForm* Intern::makeShrubbery(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeRobotize(std::string target) const
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makePresidential(std::string target) const
{
	return (new PresidentialPardonForm(target));
}

typedef AForm* (Intern::*formsList[3]) (std::string target) const ;

AForm* Intern::makeForm(std::string formName, std::string target) const
{
	formsList list = {&Intern::makeShrubbery, &Intern::makeRobotize, &Intern::makePresidential};
	std::string namesList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 2; i++)
	{
		if (!formName.compare(namesList[i]))
		{
			std::cout << "Intern creates " << formName << std::endl;	
			return ((this->*(list[i])) (target));
		}
	}
	std::cout << "Can't find " << formName << " in forms list...." << std::endl;
	return (NULL);
}
