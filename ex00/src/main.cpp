/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:41:51 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/26 08:01:20 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// creation of 3 Fixed objects
// a is created with the default constructor
// b is created with the copy constructor
// c is also created with the default constructor
// b is then assigned to c
// the raw value of each object is printed
// the raw value is the value of the _value attribute
// which is an int (0 in this case)
int main() {
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
