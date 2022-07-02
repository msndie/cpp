/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:29:42 by sclam             #+#    #+#             */
/*   Updated: 2022/05/17 16:29:59 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeSign;
	const int _gradeExec;
public:
	Form( void );
	Form( std::string name, int gradeSign, int gradeExec );
	Form( const Form& other );
	Form& operator=( const Form& other );
	~Form();

	std::string getName( void ) const;
	bool isSigned( void ) const;
	int getGradeToSign( void ) const;
	int getGradeToExec( void ) const;

	void beSigned( const Bureaucrat& bureaucrat );

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif /*FORM_H*/
