/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:08:56 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/28 10:08:56 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char **av )
{

	if (ac != 2)
	{
		std::cerr << "Invalid argument\n./harlfilter <arg>" << std::endl;
		return (1);
	}
	Harl		harl;
	std::string	arg(av[1]);
	harl.complain(arg);
	return (0);
}