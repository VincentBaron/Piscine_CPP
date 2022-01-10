/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincentbaron <vincentbaron@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:50:55 by vbaron            #+#    #+#             */
/*   Updated: 2022/01/10 15:03:08 by vincentbaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <map>

template<typename T>
int  easyfind(T &t, int i)
{
    typename T::iterator iterator;

    iterator = std::find(t.begin(), t.end(), i);
    if (iterator == t.end())
        throw std::exception();
    return *iterator;
}

template<typename key, typename value>
 int easyfind(std::map<key, value> &t, int i)
{
	typename std::map<key, value>::iterator iterator = t.begin();
	while (iterator != t.end())
	{
		if (iterator->second == i)
			return (iterator->second);
		iterator++;
	}
	if (iterator == t.end())
        throw std::exception();
    return (iterator->second);
}

template<typename key, typename value>
 int easyfind(std::multimap<key, value> &t, int i)
{
	typename std::multimap<key, value>::iterator iterator = t.begin();
	while (iterator != t.end())
	{
		if (iterator->second == i)
			return (iterator->second);
		iterator++;
	}
	if (iterator == t.end())
        throw std::exception();
    return (iterator->second);
}



#endif