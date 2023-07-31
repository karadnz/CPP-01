/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:38:17 by mkaraden          #+#    #+#             */
/*   Updated: 2023/07/31 17:02:21 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
	Weapon(std::string type);
	~Weapon();
	
	const std::string&	getType(void);
	void				setType(std::string type);

	private:
	
	std::string _type;
	
};

#endif