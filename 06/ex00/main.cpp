/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:21:08 by sclam             #+#    #+#             */
/*   Updated: 2022/05/19 21:06:47 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		return 1;
	}
	Converter converter = Converter();

	converter.convert(std::string(argv[1]));
	converter.printCharRepresentation();
	converter.printIntRepresentation();
	converter.printFloatRepresentation();
	converter.printDoubleRepresentation();
	return 0;
}