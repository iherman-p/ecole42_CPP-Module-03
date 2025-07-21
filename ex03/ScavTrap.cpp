/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:27:30 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/21 16:05:17 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string new_name)
			: ClapTrap(new_name)
{
	std::cout << "ScavTrap spawned with default constructor: " << new_name << std::endl;
	hp = 100;
	ep = 50;
	atk_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &to_cpy)
			: ClapTrap(to_cpy)
{
	std::cout << "ScavTrap spawned with copy constructor: " << this->name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyed: " << this->name << std::endl;	
}

void	ScavTrap::Attack(const std::string &target)
{
	if (ep > 0)
	{
		std::cout << this->name << " scratches " << target << " using some garbage for " << atk_dmg << " damage. >:D" << std::endl;
		ep--;
	}
	else
		std::cout << name << " tried to attack, but ran out of garbage to throw. >:(" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << name << " has entered GATE KEEPER MODE! >:O" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& to_cpy)
{
	if (this != &to_cpy)
		ClapTrap::operator=(to_cpy);
	return *this;
}