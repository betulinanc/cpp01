/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:08:44 by binanc            #+#    #+#             */
/*   Updated: 2023/12/09 22:08:45 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private :
		std::string	name;
		Weapon		*weapon;

	public :
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif
