/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:07:23 by binanc            #+#    #+#             */
/*   Updated: 2023/12/09 22:07:24 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(3, "Betül");
	for (int i = 0; i < 3; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	//system("leaks zombiehorde");
	return (0);
}
