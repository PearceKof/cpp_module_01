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
	Zombie	*horde;

	horde = zombieHorde(5, "zombie simple");
	for (int i = 0 ; i < 5 ; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}