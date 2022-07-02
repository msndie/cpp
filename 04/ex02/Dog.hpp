/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:03:03 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 14:53:19 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain* brain;
public:
	Dog( void );
	virtual ~Dog( void );
	Dog( const Dog& other );
	Dog& operator=( const Dog& other );

	virtual void makeSound( void ) const;
};

#endif /*DOG_H*/
