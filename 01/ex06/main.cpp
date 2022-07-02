/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:50:22 by sclam             #+#    #+#             */
/*   Updated: 2022/05/08 17:30:56 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv) {
	Harl harl = Harl();
	std::string tmp;
	if (argc < 2) {
		return 1;
	}
	for (int i = 0; argv[1][i]; i++) {
		tmp.push_back((char)toupper(argv[1][i]));
	}
	harl.complain(tmp);
	return 0;
}