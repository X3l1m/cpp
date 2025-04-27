/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:49:54 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:49:54 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form
{
public:
	Form(const std::string &name, int signGrade, int execGrade);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	const std::string &getName() const;
	int getSignGrade() const;
	int getExecGrade() const;
	bool isSigned() const;
	void beSigned(const Bureaucrat &bureaucrat);

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
	const int _signGrade;
	const int _execGrade;
	bool _isSigned;

	void checkGrade(int grade);
};
std::ostream &operator<<(std::ostream &os, const Form &form);