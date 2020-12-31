#include <iostream>

using namespace std;

struct Point {

private:
	int x;
	int y;

public:

	Point();
	Point(int x, int y);

	void setX(int x);
	const int getX();

	void setY(int y);
	const int getY();

	void print();

	double calculateDistance(Point p);
};