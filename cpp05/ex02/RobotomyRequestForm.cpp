/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:50:31 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:50:31 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: AForm(other), _target(other._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this != &other) {
		const_cast<std::string &>(_target) = other._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!isSigned()) {
		throw AForm::GradeTooLowException();
	}
	if (executor.getGrade() > getExecGrade()) {
		throw AForm::GradeTooLowException();
	}
	performRobotomy();
}

void RobotomyRequestForm::performRobotomy() const {
	std::cout << "Drrrrrr... " << _target << " has been robotomized successfully 50% of the time." << std::endl;
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &form) {
	os << "Robotomy Request Form: " << form.getName() << ", Target: " << form.getTarget()
	   << ", Sign Grade: " << form.getSignGrade() << ", Exec Grade: " << form.getExecGrade()
	   << ", Signed: " << (form.isSigned() ? "Yes" : "No");
	return os;
}

std::string RobotomyRequestForm::getTarget() const {
	return _target;
}