/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:39:14 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/25 12:15:15 by jcheron          ###   ########.fr       */
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

Fixed::Fixed(const int value) {
	std::cout
	<< BLUE "Int constructor called" RESET
	<< std::endl;
	this->_value = value << Fixed::_fractional_bits;
}

Fixed::Fixed(const float value) {
	std::cout
		<< BLUE "Float constructor called" RESET
		<< std::endl;
	this->_value = roundf(value * (1 << Fixed::_fractional_bits));
}

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
float Fixed::toFloat(void) const {
	return (float)this->_value / (1 << Fixed::_fractional_bits);
}

int Fixed::toInt(void) const {
	return this->_value >> Fixed::_fractional_bits;
}

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

std::ostream& operator<<(std::ostream& out, const Fixed& src) {
	out << src.toFloat();
	return out;
}
