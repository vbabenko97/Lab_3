#ifndef geometrical_figure_h
#define geometrical_figure_h

#include <string>

struct coordinates
{
	double x;
	double y;
};

class geometrical_figure
{
protected:
	std::string type;
	double area;
	coordinates center;
public:
	geometrical_figure(const std::string& cur_type, double cur_area, const coordinates& cur_center);
	geometrical_figure() = default;
	virtual ~geometrical_figure() = default;
	virtual void show() const;
};

#endif
