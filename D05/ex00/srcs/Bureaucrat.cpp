/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:38:30 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 20:13:51 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Bureaucrat.hpp"
# include <ostream>

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

int Bureaucrat::initGrade(int grade) const
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
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

    if (this->_grade-- < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement(void)
{

    if (this->_grade++ > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& rhs)
{
    os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return (os);
}