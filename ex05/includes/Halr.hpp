/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Halr.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:50:37 by root              #+#    #+#             */
/*   Updated: 2022/11/07 16:18:15 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <cstdlib>

class	Harl;

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

#endif