/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:49:37 by sclam             #+#    #+#             */
/*   Updated: 2022/05/18 14:32:25 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5) {
	_target = target;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &other ) : Form("PresidentialPardonForm", 25, 5) {
	*this = other;
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &other ) {
	this->_target = other._target;
	return *this;
}

void PresidentialPardonForm::execute( const Bureaucrat &executor ) const {
	if (!this->isSigned()) {
		std::cout << "Form not signed." << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExec()) {
		throw Form::GradeTooLowException();
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}
