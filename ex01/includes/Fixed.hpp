/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:35:28 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/25 12:13:08 by jcheron          ###   ########.fr       */
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
		Fixed(const int value);
		Fixed(const float value);

		// Destructor
		~Fixed();

		// Operators
		Fixed& operator=(const Fixed& src);

		// Methods
		float	toFloat(void) const;
		int		toInt(void) const;

		// Getters
		int		getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& src);
