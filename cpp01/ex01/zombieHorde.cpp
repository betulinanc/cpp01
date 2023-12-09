/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:07:56 by binanc            #+#    #+#             */
/*   Updated: 2023/12/09 22:07:57 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombieArray = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		zombieArray[i].setName(std::to_string(i + 1) + ". " + name);
		i++;
	}
	return (zombieArray);
}
