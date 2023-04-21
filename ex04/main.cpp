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
		std::string filename(av[1]);
		std::string toFind(av[2]);
		std::string toReplace(av[3]);
		Sed test(filename);
		test.replace(toFind, toReplace);
	}
	else
	{
		std::cerr << "Error: invalid argument ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	return (0);
}