/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:48:13 by sclam             #+#    #+#             */
/*   Updated: 2022/05/08 16:46:24 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
private:
	std::string name;
public:
	Zombie(void);
	Zombie( std::string name );
	~Zombie(void);

	void announce(void);
	void setName( std::string name );
};

#endif /*ZOMBIE_HPP*/
