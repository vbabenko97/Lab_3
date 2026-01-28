#include "circle.h"
#include <iostream>

circle::circle(const std::string& cur_type, double cur_area, const coordinates& cur_center, double cur_rad)
	: geometrical_figure(cur_type, cur_area, cur_center),
	radius(cur_rad)
{
}

void circle::show() const
{
	std::cout << "Area of circle: " << area << std::endl
		<< "Coordinates of center of circle: (" << center.x << "; " << center.y << ")" << std::endl;
}
