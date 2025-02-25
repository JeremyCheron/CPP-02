/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:35:28 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/25 12:16:43 by jcheron          ###   ########.fr       */
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
		bool	operator>(Fixed src) const;
		bool	operator<(Fixed src) const;
		bool	operator>=(Fixed src) const;
		bool	operator<=(Fixed src) const;
		bool	operator==(Fixed src) const;
		bool	operator!=(Fixed src) const;

		// Arithmetic operators
		Fixed	operator+(Fixed src) const;
		Fixed	operator-(Fixed src) const;
		Fixed	operator*(Fixed src) const;
		Fixed	operator/(Fixed src) const;

		// Increment and decrement operators
		Fixed	operator++(int);
		Fixed	operator++(void);
		Fixed	operator--(int);
		Fixed	operator--(void);

		// Methods
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		// Getters
		int		getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &src);
