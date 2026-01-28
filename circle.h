#ifndef circle_h
#define circle_h

#include "geometrical_figure.h"

class circle:public geometrical_figure
{
private:
	double radius;
public:
	circle(const std::string& cur_type, double cur_area, const coordinates& cur_center, double cur_rad);
	circle() = default;
	~circle() override = default;
	void show() const override;
};

#endif
