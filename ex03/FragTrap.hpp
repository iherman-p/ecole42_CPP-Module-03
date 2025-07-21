/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:14:32 by iherman-          #+#    #+#             */
/*   Updated: 2025/07/21 16:04:42 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap
{
	private:
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &to_cpy);
		virtual	~FragTrap();

		FragTrap&		operator=(const FragTrap& to_cpy);
		
		virtual void	Attack(const std::string &target);
		void			highFivesGuys();
};

#endif // FRAGTRAP_HPP
