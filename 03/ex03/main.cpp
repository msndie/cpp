/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:03:04 by sclam             #+#    #+#             */
/*   Updated: 2022/05/13 15:41:01 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main( void ) {
	DiamondTrap diamond("diamond");
	diamond.whoAmI();
	diamond.attack("kek");
	diamond.guardGate();
	diamond.highFivesGuys();
}
