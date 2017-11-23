#include "Point.h"

Point::Point() :
	m_x(0),
	m_y(0)
{}

Point::Point(const int x, const int y) :
	m_x(x),
	m_y(y)
{}

bool operator ==(const Point& first, const Point& second) {
	return (first.get_x() == second.get_x()) && (first.get_y() == second.get_y());
}

const Point operator +(const Point& first, const Point& second) {
	Point result = first;
	result += second;
	return result;
}

Point& operator +=(Point& first, const Point& second) {
	first.set_x(first.get_x() + second.get_x());
	first.set_y(first.get_y() + second.get_y());
	return first;
}
