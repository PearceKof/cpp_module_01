/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:55:08 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/21 15:55:08 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	Harl	harl;
	std::string line("");

	std::cout << "Enter a level: " << std::flush;
	std::cin >> line;
	harl.complain(line);

	return (0);
}