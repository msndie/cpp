/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:35:19 by sclam             #+#    #+#             */
/*   Updated: 2022/05/16 14:51:51 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>

class AAnimal {
protected:
	std::string type;
public:
	AAnimal( std::string type );
	virtual ~AAnimal( void );
	AAnimal( void );
	AAnimal( const AAnimal& other );
	AAnimal& operator=( const AAnimal& other );

	virtual void makeSound( void ) const = 0;
	std::string getType( void ) const;
};

#endif /*ANIMAL_HPP*/
