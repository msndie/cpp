/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:45:57 by sclam             #+#    #+#             */
/*   Updated: 2022/05/20 14:14:54 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void) {
	Base *ptr = generate();
	Base *ptr1 = new Base();
	identify(ptr1);
	identify(*ptr1);
	identify(ptr);
	identify(*ptr);
	delete(ptr);
	delete(ptr1);
	return 0;
}
