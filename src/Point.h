#ifndef POINT_H_
#define POINT_H_

class Point {
public:
	/*
	 * constractor.
	 */
	Point();
	/*
	 * constractor.
	 * @param  x the point.
	 * @param y the point.
	 */

	Point(const int x, const int y);
	/*
	 * get the x.
	 * @retern m_x the point.
	 */
	int get_x() const { return m_x; }
	/*
	 * set the x.
	 * @param x the point.
	 * @return m_x the point.
	 */
	void set_x(const int x) { m_x = x; }
	/*
	 * get the y
	 * @return m_y the point
	 */
	int get_y() const { return m_y; }
	/*
	 * set the y.
	 * @param y the point.
	 * @return m_y the point.
	 */
	void set_y(const int y) { m_y = y; }

private:
	int m_x;
	int m_y;
};

bool operator==(const Point& first, const Point& second);
bool operator!=(const Point& first, const Point& second);
const Point operator+(const Point& first, const Point& second);
Point& operator+=(Point& first, const Point& second);

#endif /* POINT_H_ */
