/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:48:16 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 19:14:45 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat( void );
	~WrongCat( void );
	WrongCat( const WrongCat& other );
	WrongCat& operator=( const WrongCat& other );

	void makeSound( void ) const;
};

#endif /*WRONGCAT_H*/
