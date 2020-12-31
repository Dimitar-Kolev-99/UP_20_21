#pragma once
#include "Point.h"

struct Point3D : Point{
private:
	int z;

public:
	Point3D();

	Point3D(int x, int y, int z);

	void print();

	const int getZ();
	void setZ(const int z);
};