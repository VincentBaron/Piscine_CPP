/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:50:30 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/28 16:13:23 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	public:

		// Constructors and destructor
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();

		// Operator overloads
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &rhs);

		// Getters / Setters

		// Member functions
		void execute(Bureaucrat const &executor) const;
};


#endif