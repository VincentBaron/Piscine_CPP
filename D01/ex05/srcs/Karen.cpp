/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:31:14 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/20 14:16:55 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void Karen::debug(void) const
{
    std::cout << "I love to get extra bacon. I just love it!" << std::endl;
}

void Karen::info(void) const
{
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
}

void Karen::warning(void) const
{
    std::cout << "WHAT THE F****?? Seriously bacon is NOT Healthy at all." << std::endl;
}

void Karen::error(void) const
{
    std::cout << "I'M VEGAN!!!!!! WHY DID YOU NOT TELL ME BACON WASN'T VEGAN?!" << std::endl;
}

typedef void (Karen::*complainsPtr[4]) (void) const;

void Karen::complain(std::string level)
{
    int i;

    std::istringstream(level) >> i;
    if (i < 0 || i > 3)
    {
        std::cerr << "Index is out of range!" << std::endl;
        return ;
    }
    complainsPtr ptr = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    (this->*(ptr[i])) ();
}