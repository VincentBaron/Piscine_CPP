/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 12:29:25 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/31 12:37:41 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template<typename T>
void iter(T *array, unsigned int len, void (*f)(T &arg))
{
    for (unsigned int i = 0; i < len; i++)
        f(array[i]);
}


void f1(std::string &str)
{
    std::cout << "String is: " << str << std::endl;
}

template<typename T>
void f2(T &arg)
{
    std::cout << "Can print whatever type the argument is: " << arg << std::endl;
}
#endif