/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:03:03 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 19:14:41 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog( void );
	~Dog( void );
	Dog( const Dog& other );
	Dog& operator=( const Dog& other );

	virtual void makeSound( void ) const;
};

#endif /*DOG_H*/
