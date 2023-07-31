/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:27:05 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/31 16:35:05 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "\"HI THIS IS BRAIN\"";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << " The memory address of the string variable:\t"	<< &str		 	<< std::endl;
	std::cout << " The memory address held by stringPTR:\t\t" 		<< stringPTR	<< std::endl;
	std::cout << " The memory address held by stringREF:\t\t"		<< &stringREF	<< std::endl;

	std::cout << " The value of the string variable:\t" 	<< str		 	<< std::endl;
	std::cout << " The value pointed to by stringPTR:\t" 	<< *stringPTR	<< std::endl;
	std::cout << " The value pointed to by stringREF:\t"	<< stringREF	<< std::endl;
}