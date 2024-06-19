/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 18:51:57 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/19 18:51:57 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:
	void complain(std::string level);
};

#endif