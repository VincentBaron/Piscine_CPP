/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:50:04 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/28 15:04:27 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/RobotomyRequestForm.hpp"
# include "../includes/Bureaucrat.hpp"
# include <iostream>
# include <fstream>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy", "Default", 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &srcs) : AForm(srcs)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {


	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", target, 72, 45)
{
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int fiftyFifty = RAND_MAX / 2;
	int success = (rand() > fiftyFifty) ? 1 : 0;
	
	if (executor.getGrade() > this->getGradeExec() || !this->isSigned())
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	std::cout << "Drrrrrr Drrrrr drr drr drr drrrrrr..." << std::endl;
	if (!success)
		std::cout << "Failure to robotomize " << this->getTarget() << std::endl;
	else
		std::cout << this->getTarget() << " has been robotmized!" << std::endl;
}
