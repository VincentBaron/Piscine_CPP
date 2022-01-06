/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 23:32:41 by vincentbaro       #+#    #+#             */
/*   Updated: 2022/01/06 20:14:55 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cctype>
# include <limits.h>
# include <math.h>

void displayChar(double val)
{
	std::cout << "char: ";
	if (val < CHAR_MIN || val > CHAR_MAX || isnan(val))
		std::cout << "impossible" << std::endl;
	else if (std::isprint(val))
		std::cout << "\'" << static_cast<unsigned char>(val) << "\'" << std::endl;
	else
		std::cout << "non displayable" << std::endl;
}

void displayInt(double val)
{
	std::cout << "int: ";
	if (val >= INT_MIN && val <= INT_MAX && !isinf(val) && !isnan(val))
		std::cout << static_cast<int>(val) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void displayFloat(double val)
{
	std::cout << "float: ";
	if (isinf(val))
		std::cout << ((val < 0) ? "-" : "") << "inff" << std::endl;
	else if (isnan(val))
		std::cout << "nanf" << std::endl;
	else
		std::cout << static_cast<float>(val) << std::endl;
}

void displayDouble(double val)
{
	std::cout << "double: ";
	if (isinf(val))
		std::cout << ((val < 0) ? "-" : "") << "inf" << std::endl;
	else if (isnan(val))
		std::cout << "nan" << std::endl;
	else
		std::cout << static_cast<double>(val) << std::endl;
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
			val = atof(av[1]);
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
	displayInt(val);
	displayFloat(val);
	displayDouble(val);
	return 0;
}