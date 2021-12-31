/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:31:21 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/31 18:09:27 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>
# include <iostream>
# include <stdio.h>
# include <limits.h>

void displayElem(int i)
{
    std::cout << i << std::endl;
}

class Span {

    public:

        // Constructors and destructor
        Span(void) : _nb(0) {};
        Span(unsigned int nb) : _nb(nb)
        {
            this->_array.reserve(nb);
        };
        Span(const Span &src) {*this = src;};
        virtual ~Span() {};

        // Operator overloads
        Span&	operator=(const Span &rhs)
        {   
            
            std::vector<int> copy = rhs._array;
            if (this == &rhs)
                return (*this);
            this->_array.reserve(rhs._nb);
            this->_nb = rhs._nb;

            std::vector<int>::iterator it = copy.begin();
            for (it; it < copy.end(); it++)
                addNumber(*it);
            return (*this);
        }

        // Getters / Setters

        // Member functions
        void addNumber(int nb)
        {
            if (this->_array.size() >= this->_nb)
                throw std::exception();
            this->_array.push_back(nb);

        }

        int shortestSpan(void)
        {   
            int min = INT_MAX;
            int diff;
            std::vector<int> tmp = this->_array;
            std::vector<int>::iterator x = tmp.begin();
            if (tmp.size() <= 1)
                throw std::exception();
            for (x; x < tmp.end(); x++)
            {
                std::vector<int>::iterator y = tmp.end();
                for (y; y > x; y--)
                {
                    diff = abs(*x - *y);
                    if (diff < min)
                        min = diff;
                }
            }
            return (min);
        }

        int longestSpan(void)
        {
            std::vector<int> tmp = this->_array;
            if (tmp.size() <= 1)
                throw std::exception();
            return (*max_element(tmp.begin(), tmp.end()) - *min_element(tmp.begin(), tmp.end()));
        }
        
        void display(void)
        {
            std::for_each(this->_array.begin(), this->_array.end(), displayElem);
        }

    private:

        // Attributes
        std::vector<int> _array;
        unsigned int _nb;

};

#endif