/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:14:19 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 20:36:27 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <iostream>

int main()
{
    // try
    // {
    //     Bureaucrat bureaucrat("Andre", -1);
    //     std::cout << bureaucrat << std::endl;
    // }
    // catch (Bureaucrat::GradeTooHighException &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    try
    {
        Bureaucrat bureaucrat("Andre", 1);
        std::cout << bureaucrat << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    // try
    // {
    //     std::cout << bureaucrat << std::endl;
    // }
    // catch (Bureaucrat::GradeTooHighException &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    return (0);
}