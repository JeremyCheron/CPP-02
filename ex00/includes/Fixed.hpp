/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onkeltag <onkeltag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:35:28 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/08 21:39:35 by onkeltag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed {
	private:
		int					_value;
		static const int	_fractional_bits;

	public:
		// Constructors
		Fixed();
		Fixed(const Fixed& copy);

		// Destructor
		~Fixed();

		// Operators
		Fixed& operator=(const Fixed& src);

		// Methods

		// Getters
		int		getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);
};