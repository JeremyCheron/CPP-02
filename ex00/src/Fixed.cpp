/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onkeltag <onkeltag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:39:14 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/08 21:45:19 by onkeltag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

// Constructors
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

// Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

// Operators
Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();
	return *this;
}

// Methods

// Getters
int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

// Setters
void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}