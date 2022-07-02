/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:29:28 by sclam             #+#    #+#             */
/*   Updated: 2022/05/18 16:06:14 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int main() {
	Intern intern = Intern();
	Bureaucrat test2("test2", 1);

	Form *test3 = intern.makeForm("shrubbery creation", "home");
	Form *test4 = intern.makeForm("robotomy request", "Bender");
	Form *test5 = intern.makeForm("presidential pardon", "ded moroz");
	Form *test6 = intern.makeForm("test", "test");
	if (!test6)
		std::cout << "test6 is null" << std::endl;

	test2.signForm(*test3);
	test2.signForm(*test4);
	test2.signForm(*test5);

	test2.executeForm(*test3);
	test2.executeForm(*test4);
	test2.executeForm(*test5);

	delete test3;
	delete test4;
	delete test5;
}
