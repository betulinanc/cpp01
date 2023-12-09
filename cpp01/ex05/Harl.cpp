/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:09:45 by binanc            #+#    #+#             */
/*   Updated: 2023/12/09 22:09:46 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

void Harl::debug()
{
	cout << "debug:" << endl;
	cout << "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!"<< endl;	
}

void Harl::info()
{
	cout << "info" << endl;
	cout << "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!"<<endl;
}

void Harl::warning()
{
	cout << "warning" << endl;
	cout << "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın."<< endl;
}

void Harl::error()
{
	cout << "error" << endl;
	cout << "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum." <<endl;
}

void Harl::complain(std::string level)
{
	funcArray funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			(this->*funcs[i])();
}