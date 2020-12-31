#include "Point3D.h"

Point3D::Point3D() {
	z = 0;
}

Point3D::Point3D(int x, int y, int z) : Point(x,y) {
	this->z = z;
}

void Point3D::print(){
	cout << "X: " << this->getX() << " Y: " << this->getY() << " Z: " << this->getZ() << endl;
}

const int Point3D::getZ() {
	return this->z;
}

void Point3D::setZ(const int z) {
	this->z = z;
}
