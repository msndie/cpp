/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:48:17 by sclam             #+#    #+#             */
/*   Updated: 2022/05/18 16:07:26 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern(void) {
	_names[0] = "presidential pardon";
	_names[1] = "robotomy request";
	_names[2] = "shrubbery creation";
	_f[0] = &Intern::newPresidentialPardonForm;
	_f[1] = &Intern::newRobotomyRequestForm;
	_f[2] = &Intern::newShrubberyCreationForm;
	return;
}

Intern::~Intern() {
	return;
}

Intern::Intern(const Intern& other) {
	(void) other;
	return;
}

Intern& Intern::operator=(const Intern& other) {
	(void) other;
	return *this;
}

Form* Intern::makeForm(const std::string& name, const std::string& target) {
	int i = 0;
	
	while (i < 3 && name != _names[i])
		i++;
	if (i == 3) {
		std::cout << "Intern can't create form. " << "Form with name \"" << name << "\" doesn't exist." << std::endl;
		return nullptr;
	}
	std::cout << "Intern creates " << name << "." << std::endl;
	return (this->*_f[i])(target);
}

Form* Intern::newShrubberyCreationForm(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::newRobotomyRequestForm(const std::string& target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::newPresidentialPardonForm(const std::string& target) {
	return new PresidentialPardonForm(target);
}
