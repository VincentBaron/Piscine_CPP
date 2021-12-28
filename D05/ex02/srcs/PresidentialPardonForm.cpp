/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:50:04 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/28 15:04:27 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/PresidentialPardonForm.hpp"
# include "../includes/Bureaucrat.hpp"
# include <iostream>
# include <fstream>

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential", "Default", 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &srcs) : AForm(srcs)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {


	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", target, 25, 5)
{
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{	
	if (executor.getGrade() > this->getGradeExec() || !this->isSigned())
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	std::cout << this->getTarget() << " has been pardonned by Zafod Beeblebox" << std::endl;
}
