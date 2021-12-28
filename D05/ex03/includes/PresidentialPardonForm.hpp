/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:05:35 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/28 16:13:59 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {

	public:

		// Constructors and destructor
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm(std::string traget);
		virtual ~PresidentialPardonForm();

		// Operator overloads
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &rhs);

		// Getters / Setters

		// Member functions
		void execute(Bureaucrat const &executor) const;

	protected:

		// Attributes

	private:

		// Attributes

};



#endif