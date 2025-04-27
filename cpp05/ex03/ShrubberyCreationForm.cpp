/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:51:10 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:51:10 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {	
	if (this != &other) {
		const_cast<std::string &>(_target) = other._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!isSigned()) {
		throw AForm::GradeTooLowException();
	}
	if (executor.getGrade() > getExecGrade()) {
		throw AForm::GradeTooLowException();
	}
	createShrubbery();
}

void ShrubberyCreationForm::createShrubbery() const {
	std::ofstream file(_target + "_shrubbery");
	if (!file) {
		throw std::runtime_error("Failed to create file");
	}
	file << "       _-_\n"
			"    /~~   ~~\\\n"
			"  /~~         ~~\\\n"
			" /~~             ~~\\\n"
			"/~~               ~~\\\n"
			"       |||\n";
	file.close();
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &form) {
	os << "Shrubbery Creation Form: " << form.getName() << ", Target: " << form.getTarget()
	   << ", Sign Grade: " << form.getSignGrade() << ", Exec Grade: " << form.getExecGrade()
	   << ", Signed: " << (form.isSigned() ? "Yes" : "No");
	return os;
}

std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}