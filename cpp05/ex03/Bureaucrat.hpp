/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:50:44 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:50:44 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <ostream>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();
	
	const std::string &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(AForm &form) const;
	void executeForm(const AForm &form) const;

	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const noexcept override;
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const noexcept override;
	};
	private:
	const std::string _name;
	int _grade;
	
	void checkGrade(int grade);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);