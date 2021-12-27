/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:50:04 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/28 00:25:31 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ShrubberyCreationForm.hpp"
# include "../includes/Bureaucrat.hpp"
# include <iostream>
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &srcs) : Form(srcs)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {


	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return (*this);
}

void ShrubberyCreationForm::createTree(Bureaucrat &target) const
{
	if (target.getGrade() > this->getGradeExec())
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	std::ofstream outputFile(target.getName() + "_shrubbery");
	
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
