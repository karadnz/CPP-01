/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:57:06 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/30 08:53:49 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mySed.hpp"
#include <iostream>
/*
karpuz meybuz karpuzkarpuz meybuzmeybuz meybuz karpuz karpuz
meybuzkarpuz karpuz meybuz meybuz karpuz karpuz meybuz meybuz

bbbb
*/
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./mySed <filename> <to_find> <replace>!" << std::endl;
		return 1;
	}

	mySed sed(argv[1], argv[2], argv[3]);

	if (!sed.openFiles())
	{
		std::cerr << "Error opening file!" << std::endl;
		return 1;
	}

	sed.processFile();

	return 0;
}
