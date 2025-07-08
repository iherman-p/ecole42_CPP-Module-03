/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:18:54 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/08 18:43:41 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap(std::string name, std::string clap_name);
		DiamondTrap(const DiamondTrap &to_cpy);
		virtual	~DiamondTrap();
		virtual void	Attack(const std::string &target);
		void			whoAmI();
};

#endif // DIAMONDTRAP_HPP