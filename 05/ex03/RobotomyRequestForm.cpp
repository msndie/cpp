/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:49:56 by sclam             #+#    #+#             */
/*   Updated: 2022/05/18 14:36:36 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45) {
	_target = target;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form("RobotomyRequestForm", 72, 45) {
	*this = other;
	return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	this->_target = other._target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!this->isSigned()) {
		std::cout << "Form not signed." << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExec()) {
		throw Form::GradeTooLowException();
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "VZZZZZZHHHHHHHHHH" << std::endl;
	std::cout << "DR-DR-DR-DR-DR-DR-DR-DR-DR" << std::endl;
	srand(time(NULL));
	if (rand() % 2) {
		std::cout << _target << " has been robotomized successfully." << std::endl;
	} else {
		std::cout << "Robotomy failed on " << _target << "." << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;
}
