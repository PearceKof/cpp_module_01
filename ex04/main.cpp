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


int main( int ac, char **av )
{
	if (ac == 4)
	{
		Sed sed(av[1]);
		sed.replace(av[2], av[3]);
	}
	else
	{
		std::cerr << "Error: invalid argument ./sed <filename> <s1> <s2>" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}