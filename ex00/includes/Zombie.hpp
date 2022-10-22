/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:33:26 by chaidel           #+#    #+#             */
/*   Updated: 2022/10/22 12:25:52 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	public:
	Zombie(std::string name);
	~Zombie(void);
	
	void	announce(void);
	
	private:
	std::string	_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif