/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:50:04 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/28 16:12:50 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ShrubberyCreationForm.hpp"
# include "../includes/Bureaucrat.hpp"
# include <iostream>
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", "Default", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &srcs) : AForm(srcs)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", target, 72, 45)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {


	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeExec())
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	std::ofstream outputFile(this->getTarget() + "_shrubbery");
	
	outputFile << "            ,@@@@@@@,\n"
		"    ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		" ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		"`&%\\ ` /%&'    |.|        \\ '|8'\n"
		"    |o|        | |         | |\n"
		"    |.|        | |         | |\n"
		" \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl; 
}
