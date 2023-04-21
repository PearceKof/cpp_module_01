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
	test.announce();

	Zombie	zombieTab[2];

	zombieTab[0].setName("Ben");
	zombieTab[0].announce();

	zombieTab[1].setName("Arnold");
	zombieTab[1].announce();

	Zombie	*zombiePtr;
	zombiePtr = newZombie("zombie ptr");
	zombiePtr->announce();
	delete zombiePtr;

	randomChump("random zombie");

	return (0);
}
