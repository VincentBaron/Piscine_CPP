/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:38:30 by vbaron            #+#    #+#             */
/*   Updated: 2022/01/04 12:48:14 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Bureaucrat.hpp"
# include <iostream>

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(1)
{
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &srcs) 
{
    this->_name = srcs.getName();
    this->_grade = srcs.getGrade();
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(initGrade(grade))
{
    return ;
}

Bureaucrat::~Bureaucrat(void) 
{

    return ;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs) 
{
    if (this == &rhs)
        return (*this);
    this->_name = rhs.getName();
    this->_grade = rhs.getGrade();
    return (*this);
}

unsigned int Bureaucrat::initGrade(int grade) const
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
	else
    	return (grade);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ( "Grade is too high. Max is 1." );
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ( "Grade is too low. Min is 150." );
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
	this->_grade++;
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

unsigned int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form .getName() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << this->_name << " cannot sign because the grade is too low." << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& rhs)
{
    os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return (os);
}