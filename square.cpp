#include "square.h"
#include <iostream>

square::square(const std::string& cur_type, double cur_area, const coordinates& cur_center, double cur_len)
	: geometrical_figure(cur_type, cur_area, cur_center),
	length(cur_len)
{
}

void square::show() const
{
	std::cout << "Area of square: " << area << std::endl
		<< "Coordinates of center of square: (" << center.x << "; " << center.y << ")" << std::endl;
}
