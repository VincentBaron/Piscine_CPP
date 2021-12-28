/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:05:35 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/28 16:13:59 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {

	public:

		// Constructors and destructor
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm(std::string traget);
		virtual ~RobotomyRequestForm();

		// Operator overloads
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &rhs);

		// Getters / Setters

		// Member functions
		void execute(Bureaucrat const &executor) const;

	protected:

		// Attributes

	private:

		// Attributes

};



#endif