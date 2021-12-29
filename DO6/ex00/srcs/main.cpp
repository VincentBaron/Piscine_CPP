/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 23:32:41 by vincentbaro       #+#    #+#             */
/*   Updated: 2021/12/30 00:03:17 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cctype>

void displayChar(double val)
{
	std::cout << "char: ";
	if (val < CHAR_MIN || val > CHAR_MAX)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(val))
		std::cout << static_cast<unsigned char>(val) << std::endl;
	else
		std::cout << "non displayable" << std::endl;
}

int main(int ac, char **av)
{
	std::string str;
	double val; 
	
	if (ac != 2)
	{
		std::cout << "Please use following: ./static_cast <string to cast>." << std::endl;
		return 0;
	}
	str = static_cast<std::string>(av[1]);
	if (str.size() == 1 && std::isprint(str.at(0)) && !std::isdigit(str.at(0)))
		val = str.at(0);
	else
	{
		try
		{
			val = std::stod(str);
		}
		catch(const std::exception& e)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return 0;
		}		
	}
	displayChar(val);
	return 0;
}