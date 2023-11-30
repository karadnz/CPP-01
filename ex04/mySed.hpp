/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 08:22:57 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/30 08:41:10 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

class mySed
{
	public:
	
	mySed(const std::string &filename, const std::string &to_find, const std::string &replace);
	~mySed();

	bool openFiles();
	void processFile();

	
	private:
		std::string filename;
		std::string to_find;
		std::string replace;
		std::ifstream ifile;
		std::ofstream ofile;
};