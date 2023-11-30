/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:14:30 by mkaraden          #+#    #+#             */
/*   Updated: 2023/11/30 03:27:51 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


// #ifndef N
// #define N 4
// #endif

int main(void)
{
	std::string name;
	int N;
	
	std::cout << "Horde name:";
	std::cin >> name;

	std::cout << "Horde count:";
	std::cin >> N;
	
    Zombie *zombies = zombieHorde(N, name);

    for (int i = 0; i < N; i++)
	{
        zombies[i].announce();
    }

    delete [] zombies;
    return 0;
}