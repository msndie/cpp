/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:29:48 by sclam             #+#    #+#             */
/*   Updated: 2022/05/17 15:29:58 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(void) : _name("default"), _isSigned(false), _gradeSign(150), _gradeExec(150) {
	return;
}

Form::Form(std::string name, int gradeSign, int gradeExec)
	: _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	if (gradeSign > 150 || gradeExec > 150) {
		throw Form::GradeTooHighException();
	} else if (gradeSign < 1 || gradeExec < 1) {
		throw Form::GradeTooLowException();
	}
	return;
}

Form::~Form() {
	return;
}

Form::Form(const Form &other)
	: _name(other.getName()), _isSigned(false),
	_gradeSign(other.getGradeToSign()), _gradeExec(other.getGradeToExec()) {
	return;
}

Form &Form::operator=(const Form &other) {
	(void) other;
	return *this;
}

std::string Form::getName(void) const{
	return _name;
}

bool Form::isSigned(void) const{
	return _isSigned;
}

int Form::getGradeToSign(void) const{
	return _gradeSign;
}

int Form::getGradeToExec(void) const{
	return _gradeExec;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (_gradeSign < bureaucrat.getGrade()) {
		throw Form::GradeTooLowException();
	}
	_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade is out of range. Too high");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade is out of range. Too low");
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << form.getName() << " grade to be signed " << form.getGradeToSign()
		<< ", grade to be executed " << form.getGradeToExec() << ". "
		<< "Status: " << (form.isSigned() ? "signed" : "not signed");
	return out;
}
