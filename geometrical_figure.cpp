#include "geometrical_figure.h"
#include <iostream>

geometrical_figure::geometrical_figure(const std::string& cur_type, double cur_area, const coordinates& cur_center)
	: type(cur_type), area(cur_area), center(cur_center)
{
}

void geometrical_figure::show() const
{
	std::cout << "Area of figure: " << area << std::endl
		<< "Coordinates of center of figure: (" << center.x << "; " << center.y << ")" << std::endl;
}
