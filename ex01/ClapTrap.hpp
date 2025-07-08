/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:44:53 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/08 18:04:15 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap
{
	protected:
		std::string name;
		int	hp;
		int	ep;
		int	atk_dmg;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &to_cpy);
		virtual	~ClapTrap();
		virtual void	Attack(const std::string &target);
		void			takeDamage(int amount);
		void			beRepaired(int amount);
};

#endif // CLAPTRAP_HPP