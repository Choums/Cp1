/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:33:26 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/22 14:03:20 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	public:
	Zombie(void);
	~Zombie(void);
	
	void	announce(void);
	void	setName(std::string name);
	private:
	std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif