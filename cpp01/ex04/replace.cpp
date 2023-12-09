/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:09:32 by binanc            #+#    #+#             */
/*   Updated: 2023/12/09 22:09:33 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

replace::replace(std::string fileName, std::string avS1, std::string avS2)
{
    inFile.open(fileName.c_str());
    if (!inFile.is_open())
    {
        std::cout << "file error" << std::endl;
        return ;
    }
    outFile.open((fileName + ".replace").c_str());
    s1 = avS1;
    s2 = avS2;
}

replace::~replace()
{
    
}

void    replace::findAndWrite()
{
    std::string line;
    int         i;
    int         j;
    int         k;

    while(getline(inFile, line))
    {
        i = 0;
        while (line[i])
        {
            j = 0;
            k = 0;
            while (line[i] == s1[j])
            {
                k = i;
                i++;
                j++;
                if (!s1[j])
                {
                    j = 0;
                    while (s2[j])
                        outFile << s2[j++];
                    k = -1;
                    break;
                }
            }
            if (k == -1)
                continue;
            if (k > 0)
                i = k;
            outFile << line[i];
            i++;
        }
        outFile << std::endl;
    }
}