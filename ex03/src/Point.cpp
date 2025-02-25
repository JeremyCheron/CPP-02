/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:20:42 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/25 12:25:42 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point() : _x(0), _y(0) {
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
}

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY()) {
}

Point::~Point() {
}

Point &Point::operator=(const Point &src) {
	if (this == &src)
		return *this;
	return *this;
}

const Fixed &Point::getX(void) const {
	return this->_x;
}

const Fixed &Point::getY(void) const {
	return this->_y;
}

std::ostream &operator<<(std::ostream &os, const Point &point) {
	os << "Point(" << point.getX() << ", " << point.getY() << ")";
	return os;
}
