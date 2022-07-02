/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:35:19 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 19:17:56 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal( std::string type );
	virtual ~Animal( void );
	Animal( void );
	Animal( const Animal& other );
	Animal& operator=( const Animal& other );

	virtual void makeSound( void ) const;
	std::string getType( void ) const;
};

#endif /*ANIMAL_HPP*/
