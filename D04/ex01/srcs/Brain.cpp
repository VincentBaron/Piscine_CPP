/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:32:04 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/26 12:52:01 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Default Constructor called" << std::endl;
    for (int i = 0; i < SIZE; i++)
        this->_ideas[i] = "empty";
    return ;
}

Brain::Brain(const Brain &srcs)
{
    std::cout << "Brain copy destructor called" << std::endl;
    *this = srcs;
    return ;
}

Brain::Brain(const std::string &idea)
{
    for (int i = 0; i < SIZE; i++)
        this->_ideas[i] = idea;
    return ;
}

Brain::~Brain(void) 
{

    std::cout << "Brain Destructor called" << std::endl;
    return ;
}

Brain	&Brain::operator=(const Brain &rhs) 
{
    std::cout << "Brain assignation overload called" << std::endl;
    if (this == &rhs)
        return *this;
    for (int i = 0; i < SIZE; i++)
        this->_ideas[i] = rhs._ideas[i];
    return (*this);
}

void Brain::displayIdeas(void) const
{
    for (int i = 0; i < SIZE; i++)
        std::cout << _ideas[i] << std::endl;
}

void Brain::setIdeas(std::string newIdea)
{
    for (int i = 0; i < SIZE; i++)
        this->_ideas[i] = newIdea;
}
