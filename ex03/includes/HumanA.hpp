/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:15:15 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/22 17:56:45 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"


/*	A prends l'obj en reference puisqu'il est inclut dans le constructeur
 *	A a tjrs un Wpn sur lui contrairement a B qui parfois n'en a pas
 *	A -> ref | B -> ptr
*/
class HumanA {
	public:
	HumanA(std::string name, Weapon &wpn);
	~HumanA(void);
	
	void	attack() const;
	
	private:
	std::string	_name;
	Weapon 		_wpn;		
};

#endif