/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:35:16 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/28 16:40:04 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{

    public:

        // Constructors and destructor
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &src);
        virtual ~Bureaucrat();

        // Operator overloads
        Bureaucrat&	operator=(const Bureaucrat &rhs);

        // Getters / Setters
        std::string getName(void) const;
        unsigned int getGrade(void) const;
        unsigned int initGrade(int grade) const;
        void increment(void);
        void decrement(void);
		void signForm(AForm& form);

        // Member functions
		void executeForm(AForm const &form) const;

        // Exeptions
        class GradeTooHighException : public std::exception
        {
            public:
                const char*	what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char*	what() const throw();
        };

    protected:

        // Attributes

    private:

        // Attributes
        std::string _name;
        unsigned int _grade;

};

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& rhs );

#endif