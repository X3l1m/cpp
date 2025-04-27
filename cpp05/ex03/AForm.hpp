/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:50:41 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:50:41 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
public:
	AForm(const std::string &name, int signGrade, int execGrade);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

	const std::string &getName() const;
	bool isSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(const Bureaucrat &executor) const = 0;

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

std::ostream &operator<<(std::ostream &os, const AForm &form);