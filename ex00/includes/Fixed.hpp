/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:35:28 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/26 07:59:21 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "colors.hpp"

/**
 * @brief Class that represents a fixed point number
 *
 * The class Fixed represents a fixed point number with 8 bits of fractional part.
 * The number is stored in an int, with the fractional part being the 8 least significant bits.
 * The class has a constructor that initializes the value to 0, a copy constructor, a destructor and an assignation operator.
 * The class also has a getter that returns the raw value of the fixed point number.
 * The class also has a setter that sets the raw value of the fixed point number.
 * The class also has a static const int that represents the number of fractional bits.
 */
class Fixed {
	private:
		// number value in the int form
		int					_value;
		// number of fractional bits
		static const int	_fractional_bits;

	public:
		// Constructors
		Fixed();
		Fixed(const Fixed& copy);

		// Destructor
		~Fixed();

		// Operators
		// Assignation operator - copy the value of the right operand
		// into the left operand to avoid auto affectation
		Fixed& operator=(const Fixed& src);

		// Methods

		// Getters
		int		getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);
};
