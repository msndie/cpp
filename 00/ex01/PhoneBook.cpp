/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:10:51 by sclam             #+#    #+#             */
/*   Updated: 2022/05/05 14:22:00 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->count = 0;
	this->currIndex = 0;
	MAX_ELEMENTS = 8;
	NBR_OF_FIELDS = 5;
	fields[0] = "first name";
	fields[1] = "last name";
	fields[2] = "nickname";
	fields[3] = "phone";
	fields[4] = "darkest secret";
//			{"first name", "last name", "nickname", "phone", "darkest secret"}
}

PhoneBook::~PhoneBook(void) {
	return;
}

std::string	PhoneBook::trunc(std::string str) {
	std::string trunced;

	if (str.length() >= 10) {
		trunced = str.substr(0, 9);
		trunced.append(".");
		return trunced;
	}
	return str;
}

void PhoneBook::printContacts(void) {
	int index;
	std::string tmp;

	if (count == 0) {
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < count; i++) {
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << trunc(contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << trunc(contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << trunc(contacts[i].getNickName());
		std::cout << "|" << std::endl;
	}
	std::cout << "Enter index of the contact to display: ";
	std::getline(std::cin, tmp);
	index = atoi(tmp.c_str());
	if (index < 1 || index > count) {
		std::cout << "Wrong index" << std::endl;
	} else {
		contacts[index - 1].printContact();
	}
}

void PhoneBook::addContact(void) {
	std::string tmp;
	if (currIndex == MAX_ELEMENTS)
		currIndex = 0;
	for (int i = 0; i < NBR_OF_FIELDS; i++) {
		std::cout << fields[i] << ": ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			return;
		if (tmp.empty()) {
			std::cerr << "Error" << std::endl;
			i--;
			continue;
		}
		switch (i) {
			case 0:
				contacts[currIndex].setFirstName(tmp);
				break;
			case 1:
				contacts[currIndex].setLastName(tmp);
				break;
			case 2:
				contacts[currIndex].setNickName(tmp);
				break;
			case 3:
				contacts[currIndex].setPhoneNumber(tmp);
				break;
			case 4:
				contacts[currIndex].setDarkestSecret(tmp);
				break;
			default:
				break;
		}
	}
	if (count < 8)
		count++;
	currIndex++;
}

void PhoneBook::launch(void) {
	std::string tmp;

	while (!std::cin.eof()) {
		std::cout << "Enter the command (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			break;
		if (tmp.compare("ADD") == 0)
			addContact();
		else if (tmp.compare("SEARCH") == 0)
			printContacts();
		else if (tmp.compare("EXIT") == 0)
			break;
		else
			std::cout << "Wrong command" << std::endl;
	}
}
