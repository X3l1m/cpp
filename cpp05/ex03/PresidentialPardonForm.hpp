/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:50:54 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:50:54 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	~PresidentialPardonForm();

	void execute(const Bureaucrat &executor) const override;
	std::string getTarget() const;

	private:
	const std::string _target;
	
	void performPardon() const;
};

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form);