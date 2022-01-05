/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:19:16 by vincentbaro       #+#    #+#             */
/*   Updated: 2022/01/05 15:05:15 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:

		// Constructors and destructor
		Form(void);
		Form(const Form &src);
		Form(std::string name, unsigned int gradeSign, unsigned int gradeExec);
		virtual ~Form();

		// Operator overloads
		Form&			operator=(const Form &rhs);

		// Getters / Setters
		const std::string		getName(void) const;
		bool			isSigned(void) const;
		const unsigned int&	getGradeSign(void) const;
		const unsigned int&	getGradeExec(void) const;

		// Member functions
		void beSigned(Bureaucrat& employee);
		unsigned int				initGrade(int grade) const;

	private:

		const std::string			_name;
		bool				_signed;
		const unsigned int	_gradeSign;
		const unsigned int	_gradeExec;

};

std::ostream&	operator<<( std::ostream& os, const Form& rhs );


#endif