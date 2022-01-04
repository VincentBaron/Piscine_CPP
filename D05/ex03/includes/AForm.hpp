/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:19:16 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/28 15:40:36 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	public:

		// Constructors and destructor
		AForm(void);
		AForm(const AForm &src);
		AForm(std::string name, std::string target, unsigned int gradeSign, unsigned int gradeExec);
		virtual ~AForm();

		// Operator overloads
		AForm&			operator=(const AForm &rhs);

		// Getters / Setters
		std::string		getName(void) const;
		std::string		getTarget(void) const;
		bool			isSigned(void) const;
		unsigned int	getGradeSign(void) const;
		unsigned int	getGradeExec(void) const;
		void			setSign(void);

		// Member functions
		void beSigned(Bureaucrat& employee);
		virtual void execute(Bureaucrat const &executor) const = 0;
	
	private:

		const std::string		_name;
		const std::string		_target;
		bool			_signed;
		const unsigned int	_gradeSign;
		const unsigned int	_gradeExec;

};

std::ostream&	operator<<( std::ostream& os, const AForm& rhs );


#endif