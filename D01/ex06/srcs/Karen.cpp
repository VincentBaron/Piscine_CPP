/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:31:14 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/20 13:35:18 by vbaron           ###   ########.fr       */
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
    std::cout << "I cannot believe adding extra bacon cost more money" << std::endl;
}

void Karen::warning(void) const
{
    std::cout << "WHAT THE F****?? Seriously bacon is NOT Healthy at all" << std::endl;
}

void Karen::error(void) const
{
    std::cout << "I'M VEGAN!!!!!! WHY DID YOU NOT TELL ME BACON WASN'T VEGAN??!!!" << std::endl;
}

typedef void (Karen::*complainsPtr[4]) (void) const;

void Karen::complain(std::string level)
{
    int i;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    complainsPtr ptr = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    
    i = 0;
    while (i < 4)
    {
        if (level.compare(levels[i]) == 0)
            break ;
        i++;
    }
    switch(i)
    {
        case 0: 
        std::cout << "[ " << levels[0] << " ]" << std::endl; 
        (this->*(ptr[0])) ();
        __attribute__ ((fallthrough));
        case 1:
        std::cout << "[ " << levels[1] << " ]" << std::endl;
        (this->*(ptr[1])) ();
        __attribute__ ((fallthrough));
        case 2:
        std::cout << "[ " << levels[2] << " ]" << std::endl;
        (this->*(ptr[2])) ();
        __attribute__ ((fallthrough));
        case 3:
        std::cout << "[ " << levels[3] << " ]" << std::endl;
        (this->*(ptr[3])) ();
        break;
        default :
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break ;
    }
    
}