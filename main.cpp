#include "circle.h"
#include "square.h"

#include <cmath>
#include <iostream>
#include <memory>
#include <vector>

const double PI = 3.14159265;

std::unique_ptr<geometrical_figure> create_figure()
{
	double area = 0.0;
	double length = 0.0;
	double radius = 0.0;
	coordinates center;
	int key = 0;
	while (true)
	{
		std::cout << "Square(1) or circle(2): ";
		std::cin >> key;
		std::cout << std::endl;
		switch (key)
		{
		case 1:
		{
			std::cout << "Enter the length of the side of the square: ";
			std::cin >> length;
			std::cout << "Enter the coordinates of center: " << std::endl;
			std::cout << "x: ";
			std::cin >> center.x;
			std::cout << "y: ";
			std::cin >> center.y;
			area = std::pow(length, 2);
			return std::make_unique<square>("Square", area, center, length);
		}
		case 2:
		{
			std::cout << "Enter the radius of the circle: ";
			std::cin >> radius;
			std::cout << "Enter the coordinates of center: " << std::endl;
			std::cout << "x: ";
			std::cin >> center.x;
			std::cout << "y: ";
			std::cin >> center.y;
			area = PI * std::pow(radius, 2);
			return std::make_unique<circle>("Circle", area, center, radius);
		}
		default:
		{
			std::cout << "Try again" << std::endl;
			break;
		}
		}
		std::cout << std::endl;
	}
}

int main()
{
	const int n = 2;
	std::vector<std::unique_ptr<geometrical_figure>> figures;
	figures.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		figures.push_back(create_figure());
	}

	for (const auto& figure : figures)
	{
		figure->show();
	}
	return 0;
}
