/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:50:55 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/31 15:54:06 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

template<typename T>
int easyfind(T &t, int i)
{
    typename T::iterator iterator;

    iterator = std::find(t.begin(), t.end(), i);
    if (iterator == t.end())
        throw std::exception();
    return *iterator;
}

#endif