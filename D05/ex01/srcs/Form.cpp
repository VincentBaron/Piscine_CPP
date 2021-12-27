/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:27:47 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/27 18:25:17 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
# include <iostream>

Form::Form(void) :
_name("DefaultForm"), _signed(0), _gradeSign(150), _gradeExec(150)
{
	return ;
}

Form::Form(const Form &srcs) :
_name(srcs._name), _signed(srcs._signed), _gradeSign(srcs._gradeSign), _gradeExec(srcs._gradeExec)
{
	return ;
}

Form::Form(std::string name, unsigned int gradeSign, unsigned int gradeExec) :
_name(name), _signed(0), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	return ;
}

Form::~Form(void)
{
	return ;
}

Form&	Form::operator=(const Form &rhs)
{
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_signed = rhs._signed;
	this->_gradeSign = rhs._gradeSign;
	this->_gradeExec = rhs._gradeExec;
	return (*this);
}

std::string		Form::getName(void) const {return this->_name;}
unsigned int	Form::getGradeSign(void) const {return this->_gradeSign;};
unsigned int	Form::getGradeExec(void) const {return this->_gradeExec;};
bool			Form::isSigned(void) const {return this->_signed;};
void			Form::setSign(void) {this->_signed = 1;}

void			Form::beSigned(Bureaucrat& employee)
{
	if (employee.getGrade() > this->getGradeSign())
		throw Bureaucrat::GradeTooLowException();
	else
		this->_signed = 1;
}

std::ostream&	operator<<( std::ostream& os, const Form& rhs )
{
	os << rhs.getName() << " with minimum grade for signature: " << rhs.getGradeSign() << " and minimum grade for execution: " << rhs.getGradeExec() << (rhs.isSigned() ? " is signed" : " is not signed");
	return (os);
}