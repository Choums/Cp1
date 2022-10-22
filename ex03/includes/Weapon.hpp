/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:15:12 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/22 16:42:08 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {
	public:
	Weapon(std::string wpn_name);
	~Weapon(void);

	std::string const &getType() const;
	void		setType(std::string value);

	private:
	std::string	_type;
};

#endif