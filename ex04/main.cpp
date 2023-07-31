/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:57:06 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/31 18:44:13 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>

/*
Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your
own tests to ensure your program works as expected.
*/

int	ft_err(std::string str);

//filename, s1, s2
//change all s1 to s2
//write the result to filename.replace
int main(int ac, char **av)
{
	if (ac != 4)
		return (ft_err("invalid arg count!"));
		
	std::ifstream ifile;
	std::ofstream ofile;

	std::string s1(av[2]);
	std::string s2(av[3]);
	
	ifile.open(av[1], std::ios::in);
	ofile.open(std::string((av[1])).append(".replace"), std::ios::out);

	if (!ifile || !ofile)
		return (ft_err("error opening file!"));
		
	std::string line;
	// quick
	// red
	// abc	quick	red	quickfox	jump house
	// abc	red		red redfox		jump house
	while (std::getline(ifile, line))
	{
		
		while(true)
		{
			size_t i = line.find(s1);
			if (i == std::string::npos)
				break;
			//s1 e kadar ve s1den sonrasini al aralarina s2 koy birlestir
			std::string before(line.substr(0, i));
			std::string after(line.substr(i + s1.length()));
			line = before + s2 + after;
		}
		ofile << line;
		ofile << std::endl;
	}
	
}

int	ft_err(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}