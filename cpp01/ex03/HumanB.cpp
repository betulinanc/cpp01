/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:08:39 by binanc            #+#    #+#             */
/*   Updated: 2023/12/09 22:08:40 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this -> name = name;
}

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this -> name = name;
	this -> weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon -> getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this -> weapon = &weapon;
}
