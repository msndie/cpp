/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:09:04 by sclam             #+#    #+#             */
/*   Updated: 2022/05/08 17:31:19 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	std::string levels[4];
	void (Harl::*f[4])();
public:
	Harl( void );
	~Harl();
	void complain( std::string level );
};

#endif /*HARL_HPP*/
