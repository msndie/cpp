/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:03:04 by sclam             #+#    #+#             */
/*   Updated: 2022/05/12 16:45:37 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap one("CL4P-TP");
	
	one.attack("test");
	one.takeDamage(9);
	one.beRepaired(1);
	one.takeDamage(2);
	one.attack("test");
	one.attack("test");
}
