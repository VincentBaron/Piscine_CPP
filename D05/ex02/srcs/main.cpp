/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:14:19 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/28 00:24:31 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	Bureaucrat employee("Andre", 5);
	ShrubberyCreationForm myShrub;
	myShrub.createTree(employee);
	return (0);
}