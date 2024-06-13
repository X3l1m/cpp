/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: itopchu <itopchu@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/20 18:32:42 by itopchu       #+#    #+#                 */
/*   Updated: 2023/09/20 18:32:42 by itopchu       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "main.hpp"

class Animal
{
	protected:
		std::string _type;
		void test() { std::cout << "Test line ANIMAL" << std::endl;};
	public:
		// Form
		Animal(void);
		Animal(const std::string type);
		Animal(const Animal& copy);
		Animal& operator=(const Animal& assign);
		virtual ~Animal(void);
		// Member functions
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
	private:
};
#endif