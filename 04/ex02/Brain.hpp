/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 20:25:20 by sclam             #+#    #+#             */
/*   Updated: 2022/05/15 20:38:46 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain {
private:
	std::string _ideas[100];
public:
	Brain( void );
	~Brain( void );
	Brain( const Brain& other );
	Brain& operator=( const Brain& other );
};

#endif /*BRAIN_H*/
