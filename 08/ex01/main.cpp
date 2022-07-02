/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:43:19 by sclam             #+#    #+#             */
/*   Updated: 2022/05/23 16:51:59 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main() {
	srand(time(0));
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{	
		std::cout << "-----------------" << std::endl;
		Span span(100);
		span.generate(0, 100, rand);
		// span.addRange(299, 399);
		span.print();

		try {
			std::cout << "Trying to add one more element." << std::endl;
			span.addNumber(1);
		} catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << "-----------------" << std::endl;
	}
	{
		Span span(20);
		std::vector<int> v(20, 100);
		try {
			std::cout << "Trying to add range." << std::endl;
			span.addRange(v.begin(), v.end());
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		span.print();
	}
	{
		std::cout << "-----------------" << std::endl;
		Span span(10000);
		std::vector<int> v(10000);
		try {
			std::cout << "Trying to generate 10000 elements in vector." << std::endl;
			std::generate_n(v.begin(), 10000, rand);
			std::cout << "Trying to add 10000 elements in span from vector." << std::endl;
			span.addRange(v.begin(), v.end());
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		span.print();
		std::cout << "-----------------" << std::endl;
		std::cout << "shortest span " << span.shortestSpan() << std::endl;
		std::cout << "longest span " << span.longestSpan() << std::endl;
		std::cout << "-----------------" << std::endl;
	}
	return 0;
}
