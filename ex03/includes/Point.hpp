/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:18:22 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/25 12:22:36 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "colors.hpp"

class Point {
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point();

		Point& operator=(const Point &src);

		const Fixed &getX(void) const;
		const Fixed &getY(void) const;
};

std::ostream &operator<<(std::ostream &os, const Point &point);
