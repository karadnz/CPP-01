/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 08:29:04 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/30 08:48:37 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mySed.hpp"

mySed::mySed(const std::string &filename, const std::string &to_find, const std::string &replace)
	: filename(filename), to_find(to_find), replace(replace)
{
}

mySed::~mySed()
{
	if (ifile.is_open())
		ifile.close();
	if (ofile.is_open())
		ofile.close();
}

//filename inputmode
//filename.replace output mode
bool mySed::openFiles()
{
	ifile.open(filename, std::ios::in);
	ofile.open(filename + ".replace", std::ios::out);
	return (ifile.is_open() && ofile.is_open());
}

// quick									->to_find
// red										->replace
// abc	quick	red	quickfox	jump house	->filename
// abc	red		red redfox		jump house	->filename.replace
//pos += replace.length(); to prevent 'file' 'bb' 'b' on 'bbbb' file
void mySed::processFile()
{
	std::string line;
	while (std::getline(ifile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(to_find, pos)) != std::string::npos)
		{
			std::string before(line.substr(0, pos));
			std::string after(line.substr(pos + to_find.length()));
			line = before + replace + after;
			pos += replace.length();
		}
		ofile << line << std::endl;
	}
}
