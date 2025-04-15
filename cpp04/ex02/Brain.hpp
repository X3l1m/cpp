/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 18:36:04 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/29 18:36:04 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& copy);
//member functions
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};

#endif