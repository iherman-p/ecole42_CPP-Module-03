/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:26:53 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/08 18:12:48 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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

void	test_frag()
{
	FragTrap		freeter("Freeter");
	FragTrap		froe("Froe");
	FragTrap		*freeter_clone;

	freeter_clone = new FragTrap(freeter);
	freeter_clone->beRepaired(14);
	freeter_clone->highFivesGuys();
	delete freeter_clone;

	std::cout << '\n';
	
	froe.Attack("Freeter");
	freeter.Attack("Froe");

	std::cout << '\n';

	froe.beRepaired(100);
	freeter.beRepaired(-20);

	std::cout << '\n';

	froe.takeDamage(-14);
	freeter.takeDamage(4800000);

	froe.highFivesGuys();
	freeter.highFivesGuys();
}

int	main()
{
	std::cout << "\nClaptrap tests: \n\n";
	test_clap();
	std::cout << "\nFragtrap tests: \n\n";
	test_frag();
}