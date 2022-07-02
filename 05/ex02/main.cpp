/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:29:28 by sclam             #+#    #+#             */
/*   Updated: 2022/05/18 16:08:14 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main() {
	Bureaucrat test1("test1", 150);
	Bureaucrat test2("test2", 1);

	Form *test3 = new ShrubberyCreationForm("home");
	Form *test4 = new RobotomyRequestForm("cat");
	Form *test5 = new PresidentialPardonForm("ded moroz");

	test1.signForm(*test3);
	test1.executeForm(*test3);

	test2.signForm(*test3);
	test1.executeForm(*test3);
	test2.signForm(*test4);
	test2.signForm(*test5);

	test2.executeForm(*test3);
	test2.executeForm(*test4);
	test2.executeForm(*test5);

	delete test3;
	delete test4;
	delete test5;
}
