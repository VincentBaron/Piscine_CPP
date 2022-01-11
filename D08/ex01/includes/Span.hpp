/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:31:21 by vbaron            #+#    #+#             */
/*   Updated: 2022/01/11 15:12:12 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>
# include <iostream>
# include <stdio.h>
# include <limits.h>

class Span {

    public:

        // Constructors and destructor
        Span(void);
        Span(unsigned int nb);
        Span(const Span &src);
        virtual ~Span();

        // Operator overloads
        Span&	operator=(const Span &rhs);

        // Getters / Setters

        // Member functions
        void addNumber(int nb);
        int shortestSpan(void);
        int longestSpan(void);
        void display(void);

    private:

        // Attributes
        std::vector<int> _array;
        unsigned int _nb;

};

#endif