/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:31:21 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/31 17:05:35 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>

class Span {

    public:

        // Constructors and destructor
        Span(void) : _array(NULL), _nb(0) {};
        Span(const Span &src) {*this = src;};
        virtual ~Span();

        // Operator overloads
        Span&	operator=(const Span &rhs)
        {   
            if (this == &rhs)
                return (*this);
            for (int i = 0; i < rhs._array.size(); i++)
                addNumber(rhs._array.at(i));
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
            std::vector<int> tmp = this->_array;
            
            std::vector<int>::iterator it = tmp.begin();
            
            for (it; it < tmp.end(); it++)
            {
                
            }
        }

    private:

        // Attributes
        std::vector<int> _array;
        unsigned int _nb;

};

#endif