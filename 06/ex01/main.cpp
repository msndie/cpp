/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:16:31 by sclam             #+#    #+#             */
/*   Updated: 2022/05/20 13:38:09 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main(void) {
	Data data;

	data.smthng = "test";
	data.anotherSmthng = 1337;

	std::cout << "Serializing" << std::endl;
	uintptr_t ptr = serialize(&data);
	std::cout << ptr << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << "Deserializing" << std::endl;
	Data *dataPrt = deserialize(ptr);
	std::cout << dataPrt << std::endl;
	std::cout << dataPrt->smthng << std::endl;
	std::cout << dataPrt->anotherSmthng << std::endl;
	std::cout << "-------------------" << std::endl;

	return 0;
}
