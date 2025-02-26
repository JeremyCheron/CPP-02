/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:41:51 by onkeltag          #+#    #+#             */
/*   Updated: 2025/02/26 09:05:49 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void) {
	{
		const Point a;
		const Point b(10, 0);
		const Point c(0, 10);
		const Point point(1, 1);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << "point: " << point << std::endl;
		if (bsp(a, b, c, point))
			std::cout
				<< GREEN "Point is in the triangle" RESET
				<< std::endl;
		else
			std::cout
				<< RED "Point is not in the triangle" RESET
				<< std::endl;
	}
	{
		Point a(0, 0);
		Point b(10.5, 0);
		Point c(0, 10);
		Point point(7.2, 1);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		if (bsp(a, b, c, point))
			std::cout
				<< GREEN
				<< point
				<< "Point is in the triangle" RESET
				<< std::endl;
		else
			std::cout
				<< RED "Point is not in the triangle" RESET
				<< std::endl;
	}
}
