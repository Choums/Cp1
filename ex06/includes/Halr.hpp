/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Halr.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:50:37 by root              #+#    #+#             */
/*   Updated: 2022/11/07 16:19:12 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <cstdlib>

class	Harl;

enum Level {
	Lvl_empty = -1,
	Lvl_Invalid = 0,
	Lvl1 = 1,
	Lvl2 = 2,
	Lvl3 = 3,
	Lvl4 = 4
};

class Harl {
	public:

		Harl(void);
		~Harl(void);
		
		void	complain(std::string level);
	
	private:
		void	debug(void);
		void	warning(void);
		void	info(void);
		void	error(void);
};

Level	option(std::string str);

#endif