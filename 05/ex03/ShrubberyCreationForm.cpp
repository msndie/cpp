/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:50:46 by sclam             #+#    #+#             */
/*   Updated: 2022/05/18 14:33:50 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137) {
	_target = target;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: Form("ShrubberyCreationForm", 145, 137) {
	*this = other;
	return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	this->_target = other._target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!this->isSigned()) {
		std::cout << "Form not signed." << std::endl;
		return;
	}
	if (executor.getGrade() > this->getGradeToExec()) {
		throw Form::GradeTooLowException();
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "	       _{\\ _{\\{\\/}/}/}__" << std::endl
			<< "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl
			<< "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl
			<< "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl
			<< "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl
			<< "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl
			<< "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl
			<< "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl
			<< "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl
			<< "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl
			<< "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl
			<< "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl
			<< "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl
			<< "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl
			<< "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl
			<< "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl
			<< "             {/{\\{\\{\\/}/}{\\{\\}/}" << std::endl
			<< "              {){/ {\\/}{\\/} \\}\\}" << std::endl
			<< "              (_)  \\.-'.-/" << std::endl
			<< "          __...--- |'-.-'| --...__" << std::endl
			<< "    _...--""   .-'   |'-.-'|  ' -.  ""--..__" << std::endl
			<< "  -""    ' .  . '    |.'-._| '  . .  '   " << std::endl
			<< " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl
			<< "          ' ..     |'-_.-|" << std::endl
			<< "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl
			<< "              .'   |'- .-|   '." << std::endl
			<< "  ..-'   ' .  '.   `-._.-|   .'  '  - ." << std::endl
			<< "   .-' '        '-._______.-'     '  ." << std::endl
			<< "        .      ~," << std::endl
			<< "    .       .   |\\   .    ' '-." << std::endl
			<< "    ___________/  \\____________" << std::endl
			<< "   /  Why is it, when you want \\" << std::endl
			<< "  |  something, it is so damn   |" << std::endl
			<< "  |    much work to get it?     |" << std::endl
			<< "   \\___________________________/" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}
