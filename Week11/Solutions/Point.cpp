#include "Point.h"

Point::Point(){
	setX(0);
	setY(0);
}

Point::Point(int x, int y) {
	setX(x);
	setY(y);
}


void Point::setX(int x) {
	this->x = x;
}

const int Point::getX() {
	return this->x;
}

void Point::setY(int y) {
	this->y = y;
}

const int Point::getY() {
	return this->y;
}

void Point::print() {
	cout << "X: " << getX() << " Y: " << getY() << endl;
}

double Point::calculateDistance(Point p)
{
	return sqrt((this->x - p.getX()) * (this->x - p.getX()) + (this->y - p.getY()) * (this->y - p.getY()));
}
