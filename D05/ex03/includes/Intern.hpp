/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:47:23 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/28 18:03:46 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"

class Intern {

	public:

		// Constructors and destructor
		Intern(void);
		Intern(const Intern &src);
		virtual ~Intern();

		// Operator overloads
		Intern&	operator=(const Intern &rhs);

		// Getters / Setters

		// Member functions
		AForm* makeForm(std::string formName, std::string target) const;
		AForm* makeShrubbery(std::string target) const;
		AForm* makeRobotize(std::string target) const;
		AForm* makePresidential(std::string target) const;

	protected:

		// Attributes

	private:

		// Attributes

};



#endif