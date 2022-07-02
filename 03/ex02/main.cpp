/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:03:04 by sclam             #+#    #+#             */
/*   Updated: 2022/05/13 17:50:30 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	std::cout << "---Scav---" << std::endl;
	ScavTrap scav("Scav");
	
	scav.attack("test");
	scav.takeDamage(9);
	scav.beRepaired(1);
	scav.takeDamage(2);
	scav.attack("test");
	scav.attack("test");
	scav.guardGate();


	std::cout << "---Clap---" << std::endl;
	ClapTrap clap("Clap");
	
	clap.attack("test");
	clap.takeDamage(9);
	clap.beRepaired(1);
	clap.takeDamage(2);
	clap.attack("test");
	clap.attack("test");

	std::cout << "---Frag---" << std::endl;
	FragTrap frag("Frag");
	
	frag.attack("test");
	frag.takeDamage(9);
	frag.beRepaired(1);
	frag.takeDamage(2);
	frag.attack("test");
	frag.attack("test");
	frag.highFivesGuys();
}
