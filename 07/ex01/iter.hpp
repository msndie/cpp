/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:12:45 by sclam             #+#    #+#             */
/*   Updated: 2022/05/21 13:56:53 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <cstddef>

template< typename T >
void iter(T *array, size_t size, void (*f)(T &elem)) {
	for (size_t i = 0; i < size; ++i) {
		f(array[i]);
	}
}

#endif /*ITER_H*/
