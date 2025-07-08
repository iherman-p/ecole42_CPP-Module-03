/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:26:53 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/08 18:55:03 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

void	test_clap()
{
	ClapTrap	peter("Peter");
	ClapTrap	joe("Joe");
	ClapTrap	*peter_clone;

	peter_clone = new ClapTrap(peter);
	peter_clone->beRepaired(14);
	delete peter_clone;

	std::cout << '\n';
	
	joe.Attack("Peter");
	peter.Attack("Joe");

	std::cout << '\n';

	joe.beRepaired(100);
	peter.beRepaired(-20);

	std::cout << '\n';

	joe.takeDamage(-14);
	peter.takeDamage(4800000);
}

void	test_diamond()
{
	DiamondTrap	deeter("Deeter", "Peter");
	DiamondTrap	doe("Doe", "Joe");
	DiamondTrap	*deeter_clone;

	deeter_clone = new DiamondTrap(deeter);
	deeter_clone->beRepaired(14);
	delete deeter_clone;

	std::cout << '\n';
	
	doe.Attack("Deeter");
	deeter.Attack("Doe");

	std::cout << '\n';

	doe.beRepaired(100);
	deeter.beRepaired(-20);

	std::cout << '\n';

	doe.takeDamage(-14);
	deeter.takeDamage(4800000);

	doe.whoAmI();
	deeter.whoAmI();
}

int	main()
{
	std::cout << "\nClaptrap tests: \n\n";
	test_clap();
	std::cout << "\nDiamondtrap tests: \n\n";
	test_diamond();
}