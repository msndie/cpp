/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:18:27 by sclam             #+#    #+#             */
/*   Updated: 2022/05/21 15:31:57 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

void print(int &a) {
	std::cout << a + 1 << std::endl;
}

template< typename T >
void printTemplate( T &a ) {
	std::cout << a << std::endl;
}

int main(void) {
	int arr1[] = {1, 2, 3, 4};
	std::string arr2[] = {"raz", "dva", "tri"};

	::iter(arr1, 4, print);
	std::cout << "-------------------------" << std::endl;
	::iter(arr1, 4, printTemplate);
	std::cout << "-------------------------" << std::endl;
	::iter(arr2, 3, printTemplate);
	return 0;
}
