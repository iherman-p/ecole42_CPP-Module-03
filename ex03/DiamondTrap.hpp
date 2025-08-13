/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:18:54 by iherman-          #+#    #+#             */
/*   Updated: 2025/08/13 15:12:11 by iherman-         ###   ########.fr       */
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

		DiamondTrap&	operator=(const DiamondTrap& to_cpy);

		void			whoAmI();
};

#endif // DIAMONDTRAP_HPP