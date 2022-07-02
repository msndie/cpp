/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:48:16 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 19:14:45 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat( void );
	~Cat( void );
	Cat( const Cat& other );
	Cat& operator=( const Cat& other );

	virtual void makeSound( void ) const;
};

#endif /*CAT_H*/
