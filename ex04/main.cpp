/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:38:15 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/17 11:38:15 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main( int ac, char **av )
{
	if (ac == 4)
	{
		if (!(*av[1]))
		{
			std::cerr << "ERROR: invalid filename" << std::endl;
			return (1);
		}
		Sed mySed(av[1], av[2], av[3]);
		return (mySed.replace());
	}
	else
	{
		std::cerr << "Error: invalid argument ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	return (0);
}