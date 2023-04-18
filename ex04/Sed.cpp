/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:37:56 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/17 12:37:56 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename) : iFile("filename")
{
	this->oFile = filename + ".replace";
}

void	Sed::replace(std::string toFind, std::string replacement)
{
	std::infstream inputStream(this->iFile);

	if (iStream.is_open())
	{
		std::string readed;
		if (std::getline(inputStream, readed, '\0'))
		{
			
		}
	}

}