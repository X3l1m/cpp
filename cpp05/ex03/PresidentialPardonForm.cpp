/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:50:56 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:50:56 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("Presidential Pardon Form", 25, 5), _target(target) {}

	PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: AForm(other), _target(other._target) {}

	PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	if (this != &other) {
		const_cast<std::string &>(_target) = other._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!isSigned()) {
		throw AForm::GradeTooLowException();
	}
	if (executor.getGrade() > getExecGrade()) {
		throw AForm::GradeTooLowException();
	}
	performPardon();
}

void PresidentialPardonForm::performPardon() const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form) {
	os << "Presidential Pardon Form: " << form.getName() << ", Target: " << form.getTarget()
	   << ", Sign Grade: " << form.getSignGrade() << ", Exec Grade: " << form.getExecGrade()
	   << ", Signed: " << (form.isSigned() ? "Yes" : "No");
	return os;
}

std::string PresidentialPardonForm::getTarget() const {
	return _target;
}