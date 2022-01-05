/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:27:47 by vincentbaro       #+#    #+#             */
/*   Updated: 2022/01/05 14:32:19 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
# include <iostream>

AForm::AForm(void) :
_name("DefaultAForm"), _target("Default"), _signed(0), _gradeSign(150), _gradeExec(150)
{
	return ;
}

AForm::AForm(const AForm &srcs) :
_name(srcs._name), _target(srcs._target), _signed(srcs._signed), _gradeSign(srcs._gradeSign), _gradeExec(srcs._gradeExec)
{
	return ;
}

AForm::AForm(std::string name, std::string target, unsigned int gradeSign, unsigned int gradeExec) :
_name(name), _target(target), _signed(0), _gradeSign(AForm::initGrade(gradeSign)), _gradeExec(AForm::initGrade(gradeExec))
{
	return ;
}

AForm::~AForm(void)
{
	return ;
}

AForm&	AForm::operator=(const AForm &rhs)
{
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_target = rhs._target;
	this->_signed = rhs._signed;
	this->_gradeSign = rhs._gradeSign;
	this->_gradeExec = rhs._gradeExec;
	return (*this);
}

const std::string		AForm::getName(void) const {return this->_name;}
const unsigned int	AForm::getGradeSign(void) const {return this->_gradeSign;};
const unsigned int	AForm::getGradeExec(void) const {return this->_gradeExec;};
const std::string		AForm::getTarget(void) const {return this->_target;};
bool			AForm::isSigned(void) const {return this->_signed;};

void			AForm::beSigned(Bureaucrat& employee)
{
	if (employee.getGrade() > this->getGradeSign())
		throw Bureaucrat::GradeTooLowException();
	else
		this->_signed = 1;
}

unsigned int Form::initGrade(int grade) const
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