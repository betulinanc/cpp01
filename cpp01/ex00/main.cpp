/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:06:31 by binanc            #+#    #+#             */
/*   Updated: 2023/12/09 22:06:33 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie normalZombie("normalZombie");
	Zombie *ptrZombie = newZombie("ptrZombie");
	randomChump("normalZombie2");
	normalZombie.announce();
	//ptrZombie -> announce();
	delete ptrZombie;
	return (0);
}
