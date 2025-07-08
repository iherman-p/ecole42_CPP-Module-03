/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:26:53 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/08 17:39:55 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap		peter("Peter");
	ClapTrap		joe("Joe");
	ClapTrap		*peter_clone;

	std::cout << '\n';

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