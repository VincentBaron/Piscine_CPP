/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:35:16 by vbaron            #+#    #+#             */
/*   Updated: 2022/01/05 14:17:56 by vbaron           ###   ########.fr       */
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
        const std::string getName(void) const;
        unsigned int getGrade(void) const;
        unsigned int initGrade(int grade) const;
        void increment(void);
        void decrement(void);
		void signForm(AForm& form)m;

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
        const std::string _name;
        unsigned int _grade;

};

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& rhs );

#endif