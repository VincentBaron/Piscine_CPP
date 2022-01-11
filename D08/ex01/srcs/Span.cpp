/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:55:26 by vbaron            #+#    #+#             */
/*   Updated: 2022/01/11 17:28:40 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

void displayElem(int i)
{
    std::cout << i << std::endl;
}

Span::Span(void) : _nb(0)
{

	return;
}

Span::Span(unsigned int nb) : _nb(nb)
{
	this->_array.reserve(nb);
}

Span::Span(const Span &src) { *this = src; }

Span::~Span(void)
{

	return;
}

Span &Span::operator=(const Span &rhs)
{

	std::vector<int> copy = rhs._array;
	if (this == &rhs)
		return (*this);
	this->_array.reserve(rhs._nb);
	this->_nb = rhs._nb;

	std::vector<int>::iterator it = copy.begin();
	while (it != copy.end())
	{
		addNumber(*it);
		it++;
	}
	return (*this);
}

void Span::addNumber(int nb)
{
	if (this->_array.size() >= this->_nb)
		throw std::exception();
	this->_array.push_back(nb);
}

int Span::shortestSpan(void)
{
	int min = INT_MAX;
	int diff;
	std::vector<int> tmp = this->_array;
	std::vector<int>::iterator x = tmp.begin();
	if (tmp.size() <= 1)
		throw std::exception();
	while (x != tmp.end())
	{
		std::vector<int>::iterator y = tmp.end();
		while (y > x)
		{
			diff = abs(*x - *y);
			if (diff < min)
				min = diff;
			y--;
		}
		x++;
	}
	return (min);
}

int Span::longestSpan(void)
{
	std::vector<int> tmp = this->_array;
	if (tmp.size() <= 1)
		throw std::exception();
	return (*max_element(tmp.begin(), tmp.end()) - *min_element(tmp.begin(), tmp.end()));
}

void Span::display(void)
{
	std::for_each(this->_array.begin(), this->_array.end(), displayElem);
}

void Span::addIte(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	while (start != end)
	{
		addNumber(*start);
		start++;
	}
}