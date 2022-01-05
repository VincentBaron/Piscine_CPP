/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:27:47 by vincentbaro       #+#    #+#             */
/*   Updated: 2022/01/05 15:09:17 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
# include <iostream>

AForm::AForm(void) :
_name("DefaultAForm"), _target("Default"), _signed(0), _gradeSign(150), _gradeExec(150)
{
	return ;
}

Form::Form(const Form &srcs) :
_name(srcs._name), _signed(srcs._signed), _gradeSign(srcs._gradeSign), _gradeExec(srcs._gradeExec)
{
	return ;
}

Form::Form(std::string name, unsigned int gradeSign, unsigned int gradeExec) :
_name(name), _signed(0), _gradeSign(Form::initGrade(gradeSign)), _gradeExec(Form::initGrade(gradeExec))
{
	return ;
}

Form::~Form(void)
{
	return ;
}

Form&	Form::operator=(const Form &rhs)
{
	std::string *tmp_name = (std::string *)&this->_name;
	unsigned int *tmp_gradeSign = (unsigned int *)&this->_gradeSign;
	unsigned int *tmp_gradeExec = (unsigned int *)&this->_gradeExec;
	
	if (this == &rhs)
		return *this;
	*tmp_name = rhs.getName();
	this->_signed = rhs._signed;
	*tmp_gradeSign = rhs.getGradeSign();
	*tmp_gradeExec = rhs.getGradeExec();
	return (*this);
}

const std::string		AForm::getName(void) const {return this->_name;}
const unsigned int&	AForm::getGradeSign(void) const {return this->_gradeSign;};
const unsigned int&	AForm::getGradeExec(void) const {return this->_gradeExec;};
const std::string		AForm::getTarget(void) const {return this->_target;};
bool			AForm::isSigned(void) const {return this->_signed;};

void			AForm::beSigned(Bureaucrat& employee)
{
	if (employee.getGrade() > this->getGradeSign())
		throw Bureaucrat::GradeTooLowException();
	else
		this->_signed = 1;
}

unsigned int AForm::initGrade(int grade) const
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
	else
    	return (grade);
}

std::ostream&	operator<<( std::ostream& os, const AForm& rhs )
{
	os << rhs.getName() << " with minimum grade for signature: " << rhs.getGradeSign() << " and minimum grade for execution: " << rhs.getGradeExec() << (rhs.isSigned() ? " is signed" : " is not signed");
	return (os);
}