/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:34:34 by vbaron            #+#    #+#             */
/*   Updated: 2021/12/20 14:12:42 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
     if (ac != 4)
    {
        std::cout << "Wrong number of arguments!" << std::endl;
        return (0);
    }
    size_t i;
    std::ifstream inputFile(av[1]);
    std::stringstream buffer;
    std::string bufferStr, s1, s2, filename = av[1];
    s1 = av[2];
    s2 = av[3];
    if (!s1.size() || !s2.size())
    {
        std::cout << "Both strings can't be empty!" << std::endl;
        return (1);
    }
    buffer << inputFile.rdbuf();
    bufferStr = buffer.str();

    while ((i = bufferStr.find(s1)) != std::string::npos)
    {
        size_t x = 0;
        while (x < s1.size() && x < s2.size())
        {
            bufferStr[i] = s2[x];
            x++;
            i++;
        }
        // bufferStr.replace(i, s1.size(), s2);
    }

    size_t dot_index;
    dot_index = filename.find_last_of('.');
    std::string replace_str = "replace";
    filename = filename.substr(0, dot_index + 1);
    filename = filename + replace_str;
    // filename.replace(dot_index, 8, ".replace");
    std::ofstream outputFile(filename);

    outputFile << bufferStr << std::endl;
    return (0);
}