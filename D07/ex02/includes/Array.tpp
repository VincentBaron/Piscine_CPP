/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:04:14 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/31 13:49:27 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_TPP
# define TEMPLATE_TPP
# include <iostream>


template<typename T>
class Array {
    
    public:

        // Constructors and destructor
        Array(void) : _elements(NULL), _nb(0)
        {
            std::cout << "Default Constructor called" << std::endl;
        }

        Array(unsigned int n) : _elements(new T[n]()), _nb(n)
        {
            std::cout << "Parametized constructor called" << std::endl;
        }

        Array(const Array &src) : _elements(NULL), _nb(0)
        {
            std::cout << "Copy constructor called" << std::endl;
            *this = src;
        }
        
        virtual ~Array()
        {
            if (this->_elements != NULL)
                delete [] this->_elements;
        }

        // Operator overloads
        Array&	operator=(const Array &rhs)
        {
            std::cout << "= operator constructor called" << std::endl;

            if (this == &rhs)
                return *this;
            if (this->_elements != NULL)
                delete [] this->_elements;
            this->_nb = rhs.size();
            this->_elements = new T[this->_nb];
            for (unsigned int i = 0; i < this->_nb; i++)
                this->_elements[i] = rhs._elements[i];
            return (*this);
        }

        T& operator[](unsigned int idx)
        {
            if (idx < 0 || idx >= this->size() || !this->_elements)
                throw std::exception();
            return (this->_elements[idx]);
        }

        // Getters / Setters

        // Member functions
        unsigned int size(void) const {return this->_nb;}

    private:

        // Attributes
        T* _elements;
        unsigned int _nb;
};

#endif