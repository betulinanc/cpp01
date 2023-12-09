/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:09:39 by binanc            #+#    #+#             */
/*   Updated: 2023/12/09 22:09:40 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

class replace
{
private:
    std::ifstream   inFile;
    std::ofstream   outFile;
    std::string     s1;
    std::string     s2;

public:
    replace(std::string fileName, std::string avS1, std::string avS2);
    ~replace();

    void    findAndWrite();
};