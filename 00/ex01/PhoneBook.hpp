/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:10:49 by sclam             #+#    #+#             */
/*   Updated: 2022/05/05 13:58:24 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
public:
	PhoneBook(void);
	~PhoneBook(void);
	void launch(void);

private:
	std::string	fields[5];
	int NBR_OF_FIELDS;
	int MAX_ELEMENTS;
	Contact contacts[8];
	int count;
	int currIndex;

	std::string trunc(std::string str);
	void printContacts(void);
	void addContact(void);
};

//static const std::string fields[5] = {"first name", "last name", "nickname", "phone", "darkest secret"};

#endif /*PHONE_BOOK_HPP*/