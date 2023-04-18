/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:11:54 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/10 15:11:54 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	test("TEST");
	Zombie	zombieTab[2];
	Zombie	*zombiePtr;

	test.announce();
	zombieTab[0].setName("Ben");
	zombieTab[0].announce();
	zombieTab[1].setName("Arnold");
	zombieTab[1].announce();
	zombiePtr = newZombie("zombie ptr");
	zombiePtr->announce();
	randomChump("random zombie");
	delete zombiePtr;
	return (0);
}