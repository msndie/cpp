/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:45:41 by sclam             #+#    #+#             */
/*   Updated: 2022/05/21 19:05:52 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template< typename T >
typename T::iterator easyfind( T & container, int toFind ) {
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	return it;
}
