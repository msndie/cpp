/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:35:19 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 19:43:06 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal( std::string type );
	~WrongAnimal( void );
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& other );
	WrongAnimal& operator=( const WrongAnimal& other );

	void makeSound( void ) const;
	std::string getType( void ) const;
};

#endif /*WRONGANIMAL_HPP*/
