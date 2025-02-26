/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:35:28 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/26 08:16:43 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>
#include "colors.hpp"

class Fixed {
	private:
		int					_value;
		static const int	_fractional_bits;

	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int value);
		Fixed(const float value);

		// Destructor
		~Fixed();

		// Operators
		Fixed& operator=(const Fixed &src);

		// Comparison operators

		// Greater than, less than, greater or equal, less or equal, equal and not equal
		bool	operator>(Fixed src) const;
		bool	operator<(Fixed src) const;
		bool	operator>=(Fixed src) const;
		bool	operator<=(Fixed src) const;
		bool	operator==(Fixed src) const;
		bool	operator!=(Fixed src) const;

		// Arithmetic operators

		// Addition, subtraction, multiplication and division
		Fixed	operator+(Fixed src) const;
		Fixed	operator-(Fixed src) const;
		Fixed	operator*(Fixed src) const;
		Fixed	operator/(Fixed src) const;

		// Increment and decrement operators

		// Prefix increment
		Fixed	operator++(int);
		// Postfix increment
		Fixed	operator++(void);
		// Prefix decrement
		Fixed	operator--(int);
		// Postfix decrement
		Fixed	operator--(void);

		// Methods
		float	toFloat(void) const;
		int		toInt(void) const;
		// Static methods

		// Returns the reference to the smallest Fixed
		static Fixed &min(Fixed &a, Fixed &b);
		// Returns the reference to the smallest Fixed
		static const Fixed &min(const Fixed &a, const Fixed &b);
		// Returns the reference to the biggest Fixed
		static Fixed &max(Fixed &a, Fixed &b);
		// Returns the reference to the biggest Fixed
		static const Fixed &max(const Fixed &a, const Fixed &b);

		// Getters
		int		getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &src);
