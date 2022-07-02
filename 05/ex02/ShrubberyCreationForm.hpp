/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:50:50 by sclam             #+#    #+#             */
/*   Updated: 2022/05/18 14:00:42 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm( std::string target );
	~ShrubberyCreationForm();
	ShrubberyCreationForm( const ShrubberyCreationForm& other );
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm& other );

	void execute(const Bureaucrat &executor) const;
};


#endif /*SHRUBBERYCREATIONFORM_HPP*/
