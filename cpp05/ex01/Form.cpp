/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:49:53 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:49:53 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int signGrade, int execGrade)
	: _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false) {
	checkGrade(signGrade);
	checkGrade(execGrade);
}

Form::Form(const Form &other)
	: _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade), _isSigned(other._isSigned) {}

Form &Form::operator=(const Form &other) {
	if (this != &other) {
		const_cast<std::string &>(_name) = other._name;
		const_cast<int &>(_signGrade) = other._signGrade;
		const_cast<int &>(_execGrade) = other._execGrade;
		_isSigned = other._isSigned;
	}
	return *this;
}

Form::~Form() {}

const std::string &Form::getName() const {
	return _name;
}

int Form::getSignGrade() const {
	return _signGrade;
}

int Form::getExecGrade() const {
	return _execGrade;
}

bool Form::isSigned() const {
	return _isSigned;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _signGrade) {
		throw GradeTooLowException();
	}
	_isSigned = true;
}

void Form::checkGrade(int grade) {
	if (grade < 1) {
		throw GradeTooHighException();
	}
	if (grade > 150) {
		throw GradeTooLowException();
	}
}

const char *Form::GradeTooHighException::what() const noexcept {
	return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const noexcept {
	return "Grade is too low!";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "Form: " << form.getName() << ", Sign Grade: " << form.getSignGrade()
	   << ", Exec Grade: " << form.getExecGrade() << ", Signed: " << (form.isSigned() ? "Yes" : "No");
	return os;
}