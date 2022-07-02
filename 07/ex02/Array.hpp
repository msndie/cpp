/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:10:10 by sclam             #+#    #+#             */
/*   Updated: 2022/05/21 14:45:56 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

template< typename T >
class Array {
private:
	T * _array;
	size_t _len;
public:
	Array( void ) : _array(nullptr), _len(0) {
		return;
	}

	Array( size_t n ) : _len(n) {
		if (n != 0) {
			_array = new T[n];
			std::memset( _array, 0, n * sizeof( T ) );
		} else {
			_array = nullptr;
		}
		return;
	}

	~Array() {
		if (_array != nullptr)
			delete [] _array;
	}

	Array( const Array& other ) : _array(nullptr) {
		*this = other;
		return;
	}

	Array& operator=( const Array& other ) {
		if (this != &other) {
			if (this->_array != nullptr) {
				delete [] _array;
			}
			this->_array = new T[other._len];
			this->_len = other._len;
			for (size_t i = 0; i < _len; ++i) {
				this->_array[i] = other._array[i];
			}
		}
		return *this;
	}

	T& operator[]( size_t idx ) {
		if (this->_array == nullptr || idx >= _len) {
			throw std::exception();
		}
		return _array[idx];
	}

	size_t size( void ) {
		return _len;
	}
};

#endif /*ARRAY_H*/
