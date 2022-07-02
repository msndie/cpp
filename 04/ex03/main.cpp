/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:46:16 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 20:28:33 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	// me->unequip(1);
	// delete tmp;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	Cure *cure = (Cure*)src->createMateria("cure");
	Cure *temp = (Cure*)cure->clone();
	std::cout << temp->getType() << std::endl;
	delete temp;
	std::cout << cure->getType() << std::endl;
	delete cure;
	delete src;
	Character *copy = new Character(*(Character*)me);
	std::cout << copy->getName() << std::endl;
	std::cout << me->getName() << std::endl;
	copy->use(0, *bob);
	copy->use(1, *bob);
	delete copy;
	delete me;
	delete bob;
	return 0;
}