/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:15:58 by sclam             #+#    #+#             */
/*   Updated: 2022/05/06 15:03:22 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	std::string const& getType(void);
	void setType(std::string type);
};

#endif /*WEAPON_HPP*/