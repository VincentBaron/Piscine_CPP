/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:24:21 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/31 18:37:51 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>{

    public:

        //Attributes
        typedef typename std::stack<T>::container_type::iterator iterator;

        // Constructors and destructor
        MutantStack(void) : std::stack<T>() {};
        MutantStack(const MutantStack<T> &src) : std::stack<T>(src) {};
        virtual ~MutantStack() {};

        // Operator overloads
        MutantStack<T>&	operator=(const MutantStack &rhs)
        {
            this->c = rhs.c;
            return (*this);
        }

        iterator begin(void)
        {
            return (this->c.begin());
        }

        iterator end(void)
        {
            return (this->c.end());
        }

        // Getters / Setters

        // Member functions

    protected:

        // Attributes

    private:

        // Attributes

};



#endif