/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:38:30 by vbaron            #+#    #+#             */
/*   Updated: 2022/01/05 14:38:40 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <ostream>

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(1)
{
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &srcs)
{
	*this = srcs;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(initGrade(grade))
{
	return;
}

Bureaucrat::~Bureaucrat(void)
{

	return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::string *tmp = (std::string *)&this->_name;
	if (this == &rhs)
		return (*this);
	*tmp = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}

int Bureaucrat::initGrade(int grade) const
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		return (grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high. Max is 1.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low. Min is 150.");
}

void Bureaucrat::increment(void)
{

	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrement(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (os);
}