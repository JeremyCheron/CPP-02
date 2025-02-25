/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:25:59 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/25 12:29:11 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

static float area(const Point p1, const Point p2, const Point p3)
{
	float area;

	area = (
		(p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())) +
		(p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())) +
		(p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat()))
	) / 2;

	if (area < 0)
		area = -area;
	return area;
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float d0, d1, d2, d3;
	bool ret = false;

	d0 = area(a, b, c);
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, c, a);

	if (d1 == 0 || d2 == 0 || d3 == 0)
		ret = false;
	else if (d1 + d2 + d3 == d0)
		ret = true;
	return ret;
}
