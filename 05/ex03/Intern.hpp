/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:47:47 by sclam             #+#    #+#             */
/*   Updated: 2022/05/18 16:00:55 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
	std::string _names[3];
	Form* (Intern::*_f[3])( const std::string& target );
	Form* newShrubberyCreationForm( const std::string& target );
	Form* newRobotomyRequestForm( const std::string& target );
	Form* newPresidentialPardonForm( const std::string& target );
public:
	Intern( void );
	~Intern();
	Intern( const Intern& other );
	Intern& operator=( const Intern& other );

	Form* makeForm( const std::string& name, const std::string& target );
};

#endif /*INTERN_H*/
