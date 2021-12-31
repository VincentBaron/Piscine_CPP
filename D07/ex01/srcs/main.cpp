/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 12:10:19 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/31 12:41:42 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"
#include <iostream>

int main()
{

    std::string array[3] = {"Hello", "World", "!"};
    int array2[5] = {1, 2, 3, 4, 5};

    iter(array, 3, &f1);
    iter(array2, 5, &f2);
    return 0;
}