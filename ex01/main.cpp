/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:14:30 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/30 20:44:13 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


#ifndef N
#define N 4
#endif

int main(void)
{
    Zombie *zombies = zombieHorde(N, "brainfever");

    for (int i = 0; i < N; i++)
	{
        zombies[i].announce();
    }

    delete [] zombies;
    return 0;
}