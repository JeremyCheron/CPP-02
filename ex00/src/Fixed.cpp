/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:39:14 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/25 12:12:16 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fractional_bits = 8;

// Constructors
Fixed::Fixed() : _value(0) {
	std::cout
		<< YELLOW "Default constructor called" RESET
		<< std::endl;
}

Fixed::Fixed(const Fixed& copy) {
	std::cout
		<< CYAN "Copy constructor called" RESET
		<< std::endl;
	*this = copy;
}

// Destructor
Fixed::~Fixed() {
	std::cout
		<< RED "Destructor called" RESET
		<< std::endl;
}

// Operators
Fixed& Fixed::operator=(const Fixed& src) {
	std::cout
		<< MAGENTA "Copy assignation operator called" RESET
		<< std::endl;
	if (this != &src)
		this->_value = src.getRawBits();
	return *this;
}

// Methods

// Getters
int	Fixed::getRawBits(void) const {
	std::cout
	<< GREEN "getRawBits member function called" RESET
	<< std::endl;
	return this->_value;
}

// Setters
void	Fixed::setRawBits(int const raw) {
	std::cout
		<< GREEN "setRawBits member function called" RESET
		<< std::endl;
	this->_value = raw;
}
