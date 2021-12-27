/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:19:16 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/27 18:22:58 by vincentbaro      ###   ########.fr       */
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
		std::string		getName(void) const;
		bool			isSigned(void) const;
		unsigned int	getGradeSign(void) const;
		unsigned int	getGradeExec(void) const;
		void			setSign(void);

		// Member functions
		void beSigned(Bureaucrat& employee);

	private:

		std::string			_name;
		bool				_signed;
		unsigned int	_gradeSign;
		unsigned int	_gradeExec;

};

std::ostream&	operator<<( std::ostream& os, const Form& rhs );


#endif