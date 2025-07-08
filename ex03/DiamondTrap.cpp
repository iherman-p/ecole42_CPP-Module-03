/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:18:56 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/08 18:54:14 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string new_name, std::string clap_name) :
			ClapTrap(clap_name),
			ScavTrap(new_name),
			FragTrap(new_name)
{
	std::cout << "DiamondTrap spawned with default constructor: " << new_name << ", " << clap_name << std::endl;
	DiamondTrap::name = new_name;
	hp = 100;
	ep = 100;
	atk_dmg = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &to_cpy) :
			ClapTrap(to_cpy),
			ScavTrap(to_cpy),
			FragTrap(to_cpy)
{
	std::cout << "DiamondTrap spawned with copy constructor: " << this->name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destroyed: " << this->name << std::endl;	
}

void	DiamondTrap::Attack(const std::string &target)
{
	FragTrap::Attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Who am i...?\nI must be " << ScavTrap::name << "\nno.. I'm " << this->name << std::endl;
}
