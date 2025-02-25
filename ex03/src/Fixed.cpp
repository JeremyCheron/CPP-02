/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:39:14 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/25 12:16:59 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fractional_bits = 8;

// Constructors
Fixed::Fixed() : _value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value) {
	// std::cout << "Int constructor called" << std::endl;
	this->_value = value << Fixed::_fractional_bits;
}

Fixed::Fixed(const float value) {
	// std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << Fixed::_fractional_bits));
}

// Destructor
Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

// Operators
Fixed& Fixed::operator=(const Fixed& src) {
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();
	return *this;
}

// Comparison operators
bool	Fixed::operator>(Fixed src) const {
	return this->toFloat() > src.toFloat();
}

bool	Fixed::operator<(Fixed src) const {
	return this->toFloat() < src.toFloat();
}

bool	Fixed::operator>=(Fixed src) const {
	return this->toFloat() >= src.toFloat();
}

bool	Fixed::operator<=(Fixed src) const {
	return this->toFloat() <= src.toFloat();
}

bool	Fixed::operator==(Fixed src) const {
	return this->toFloat() == src.toFloat();
}

bool	Fixed::operator!=(Fixed src) const {
	return this->toFloat() != src.toFloat();
}

// Arithmetic operators
Fixed	Fixed::operator+(Fixed src) const {
	return this->toFloat() + src.toFloat();
}

Fixed	Fixed::operator-(Fixed src) const {
	return this->toFloat() - src.toFloat();
}

Fixed	Fixed::operator*(Fixed src) const {
	return this->toFloat() * src.toFloat();
}

Fixed	Fixed::operator/(Fixed src) const {
	return this->toFloat() / src.toFloat();
}

// Increment and decrement operators
Fixed	Fixed::operator++(int) {
	Fixed tmp = *this;
	++this->_value;
	return tmp;
}

Fixed	Fixed::operator++(void) {
	++this->_value;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp = *this;
	--this->_value;
	return tmp;
}

Fixed	Fixed::operator--(void) {
	--this->_value;
	return *this;
}

// Methods
float Fixed::toFloat(void) const {
	return (float)this->_value / (1 << Fixed::_fractional_bits);
}

int Fixed::toInt(void) const {
	return this->_value >> Fixed::_fractional_bits;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return a > b ? a : b;
}

// Getters
int	Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

// Setters
void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& src) {
	out << src.toFloat();
	return out;
}
