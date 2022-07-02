/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:27:17 by sclam             #+#    #+#             */
/*   Updated: 2022/05/17 14:38:13 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) : _name("default") {
	gradeSet(150);
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	gradeSet(grade);
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
	return;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this == &other) {
		return *this;
	}
	this->_grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat() {
	return;
}

std::string Bureaucrat::getName(void) const {
	return _name;
}

int Bureaucrat::getGrade(void) const {
	return _grade;
}

void Bureaucrat::incrGrade(void) {
	gradeSet(_grade - 1);
}

void Bureaucrat::decrGrade(void) {
	gradeSet(_grade + 1);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade() << "." << std::endl;
	return out;
}

void Bureaucrat::gradeSet(int grade) {
	if (grade > 150) {
		throw GradeTooLowException();
	} else if (grade < 1) {
		throw GradeTooHighException();
	}
	_grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is out of range. Too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is out of range. Too low");
}
