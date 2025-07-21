/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:27:28 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/21 16:05:06 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : virtual public ClapTrap
{
	private:
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &to_cpy);
		virtual	~ScavTrap();

		ScavTrap&		operator=(const ScavTrap& to_cpy);

		virtual void	Attack(const std::string &target);
		void			guardGate();
};

#endif // SCAVTRAP_HPP