/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:09:02 by binanc            #+#    #+#             */
/*   Updated: 2023/12/09 22:09:03 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this -> type = type;
}

std::string Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this -> type = type;
}
