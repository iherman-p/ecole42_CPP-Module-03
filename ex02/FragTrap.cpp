/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:27:30 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/08 18:14:49 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string new_name)
			: ClapTrap(new_name)
{
	std::cout << "FragTrap spawned with default constructor: " << new_name << std::endl;
	hp = 100;
	ep = 100;
	atk_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &to_cpy)
			: ClapTrap(to_cpy)
{
	std::cout << "FragTrap spawned with copy constructor: " << this->name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed: " << this->name << std::endl;	
}

void	FragTrap::Attack(const std::string &target)
{
	if (ep > 0)
	{
		std::cout << this->name << " throws a grenade at " << target << " for " << atk_dmg << " damage. >:D" << std::endl;
		ep--;
	}
	else
		std::cout << name << " tried to explode you, but forgot to bring backup grenades. >:(" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << name << " extends their hand to give everybody a high five >:)" << std::endl;
}
