/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:26:53 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/08 18:08:33 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

void	test_clap()
{
	ClapTrap		peter("Peter");
	ClapTrap		joe("Joe");
	ClapTrap		*peter_clone;

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

void	test_scav()
{
	ScavTrap		sceeter("Sceeter");
	ScavTrap		scoe("Scoe");
	ScavTrap		*sceeter_clone;

	sceeter_clone = new ScavTrap(sceeter);
	sceeter_clone->beRepaired(14);
	sceeter_clone->guardGate();
	delete sceeter_clone;

	std::cout << '\n';
	
	scoe.Attack("Sceeter");
	sceeter.Attack("Scoe");

	std::cout << '\n';

	scoe.beRepaired(100);
	sceeter.beRepaired(-20);

	std::cout << '\n';

	scoe.takeDamage(-14);
	sceeter.takeDamage(4800000);

	scoe.guardGate();
	sceeter.guardGate();
}

int	main()
{
	std::cout << "\nClaptrap tests: \n\n";
	test_clap();
	std::cout << "\nScavtrap tests: \n\n";
	test_scav();
}