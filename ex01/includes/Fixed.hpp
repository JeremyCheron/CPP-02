/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:35:28 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/26 08:04:01 by jcheron          ###   ########.fr       */
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
		Fixed(const Fixed& copy);
		// The int constructor shifts the value to the left by the number of fractional bits
		// to store the fractional part
		Fixed(const int value);
		// The float constructor rounds the value to the nearest integer and shifts it to the left
		Fixed(const float value);

		// Destructor
		~Fixed();

		// Operators
		Fixed& operator=(const Fixed& src);

		// Methods
		// Converts the fixed point number to a float
		float	toFloat(void) const;
		// Converts the fixed point number to an int
		int		toInt(void) const;

		// Getters
		int		getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);
};

// Overload of the << operator to print the raw value of the fixed point number
std::ostream& operator<<(std::ostream& out, const Fixed& src);
