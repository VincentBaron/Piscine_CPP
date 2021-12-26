/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:30:57 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 12:49:52 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include "master.hpp"

class Brain {

    public:

        // Constructors and destructor
        Brain(void);
        Brain(const Brain &src);
        Brain(const std::string& idea);
        virtual ~Brain();

        // Operator overloads
        Brain&	operator=(const Brain &rhs);

        // Getters / Setters

        // Member functions
        void displayIdeas(void) const;
        void setIdeas(std::string newIdea);

    protected:

        // Internal functions

        // Attributes
        std::string _ideas[SIZE];

    private:

        // Internal functions

        // Attributes

};

#endif