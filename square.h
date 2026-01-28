#ifndef square_h
#define square_h

#include "geometrical_figure.h"

class square:public geometrical_figure
{
private:
	double length;
public:
	square(const std::string& cur_type, double cur_area, const coordinates& cur_center, double cur_len);
	square() = default;
	~square() override = default;
	void show() const override;
};

#endif 
