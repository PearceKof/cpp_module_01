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

Sed::Sed(std::string filename) : filenameToCopy(filename), filenameReplace(filename + ".replace")
{
	std::cout << "constructor called" << std::endl;
}

Sed::~Sed( void )
{
	std::cout << "destructor called" << std::endl;
}

void	Sed::replace( std::string toFind, std::string replacement )
{
	std::ifstream inputStream(this->filenameToCopy.c_str());

	if (inputStream.is_open())
	{
		std::string readed("");
		if (std::getline(inputStream, readed, '\0'))
		{
			std::cerr << "DEBUG: " << readed << std::endl;
			std::ofstream outputStream(this->filenameReplace.c_str());
			if (outputStream.is_open())
			{
				size_t i(0);
				while (i < readed.length())
				{
					if (readed.compare(i, toFind.length(), toFind))
					{
						outputStream << readed[i] << std::flush;
						i++;
					}
					else
					{
						outputStream << replacement;
						i += toFind.length();
					}
					if (outputStream.fail())
						std::cerr << this->filenameReplace << "error";
				}
			}
			else
			{
				std::cerr << "ERROR: failed to open " << this->filenameReplace << std::endl;
			}
			outputStream.close();
		}
		else
		{
			std::cerr << "DEBUG";
		}
		inputStream.close();
	}
	else
	{
		std::cerr << "ERROR: failed to open " << this->filenameToCopy << std::endl;
	}

}