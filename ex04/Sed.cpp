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

Sed::Sed(char *filename, char *find, char *replace) : filenameToCopy(filename),
										filenameReplace(filenameToCopy + ".replace"),
										toFind(find),
										toReplace(replace)
{
	std::cout << "constructor called" << std::endl;
}

Sed::~Sed( void )
{
	std::cout << "destructor called" << std::endl;
}

void	Sed::replace( void )
{
	std::ifstream inputStream(this->filenameToCopy.c_str());

	if (inputStream.is_open())
	{
		std::string readed("");
		if (std::getline(inputStream, readed, '\0') || inputStream.eof())
		{
			std::ofstream outputStream(this->filenameReplace.c_str());
			if (outputStream.is_open())
			{
				size_t i(0);
				std::ofstream outputStream(this->filenameReplace.c_str());
				while (i < readed.length())
				{
					if (readed.compare(i, this->toFind.length(), this->toFind))
					{
						outputStream << readed[i] << std::flush;
						i++;
					}
					else
					{
						outputStream << this->toReplace;
						i += this->toFind.length();
					}
				}
			}
			else
			{
				std::cerr << "ERROR: " << this->filenameReplace << ": " << strerror(errno) << std::endl;
			}
			outputStream.close();
		}
		inputStream.close();
	}
	else
	{
		std::cerr << "ERROR: " << this->filenameToCopy << ": " << strerror(errno) << std::endl;
	}

}