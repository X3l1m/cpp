/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:50:06 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:50:06 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string &name, int signGrade, int execGrade)
	: _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false) {
	checkGrade(signGrade);
	checkGrade(execGrade);
}

AForm::AForm(const AForm &other)
	: _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade), _isSigned(other._isSigned) {}

AForm &AForm::operator=(const AForm &other) {
	if (this != &other) {
		const_cast<std::string &>(_name) = other._name;
		const_cast<int &>(_signGrade) = other._signGrade;
		const_cast<int &>(_execGrade) = other._execGrade;
		_isSigned = other._isSigned;
	}
	return *this;
}

AForm::~AForm() {}

const std::string &AForm::getName() const {
	return _name;
}

int AForm::getSignGrade() const {
	return _signGrade;
}

int AForm::getExecGrade() const {
	return _execGrade;
}

bool AForm::isSigned() const {
	return _isSigned;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _signGrade) {
		throw GradeTooLowException();
	}
	_isSigned = true;
}

void AForm::checkGrade(int grade) {
	if (grade < 1) {
		throw GradeTooHighException();
	}
	if (grade > 150) {
		throw GradeTooLowException();
	}
}

const char *AForm::GradeTooHighException::what() const noexcept {
	return "Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const noexcept {
	return "Grade is too low!";
}

std::ostream &operator<<(std::ostream &os, const AForm &form) {
	os << "Form: " << form.getName() << ", Sign Grade: " << form.getSignGrade()
	   << ", Exec Grade: " << form.getExecGrade() << ", Signed: " << (form.isSigned() ? "Yes" : "No");
	return os;
}