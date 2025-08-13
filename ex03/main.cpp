/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:26:53 by iherman-          #+#    #+#             */
/*   Updated: 2025/08/12 17:25:26 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main()
{
	DiamondTrap	deeter("Deeter", "Peter");
	DiamondTrap	doe("Doe", "Joe");
	DiamondTrap	*deeter_clone;

	deeter_clone = new DiamondTrap(deeter);

	std::cout << '\n'; // end of constructors

	deeter_clone->beRepaired(14);
	delete deeter_clone;

	std::cout << '\n';
	
	doe.attack("Deeter");
	deeter.attack("Doe");

	std::cout << '\n';

	doe.beRepaired(100);
	deeter.beRepaired(-20); //big problem

	std::cout << '\n';

	doe.takeDamage(-14);
	deeter.takeDamage(4800000);

	doe.whoAmI();
	deeter.whoAmI();
}