#include "CVect2D.h"
#include <iostream>

CVect2D::CVect2D()
{
}

CVect2D::CVect2D(float x, float y)
{

	X = x;
	Y = y;

}


void CVect2D::Norme(CVect2D a, CVect2D b, CVect2D c)
{
	float R;
	R = (pow((b.X - a.X), 2) + pow((b.Y - a.Y), 2));
	R = sqrt(X);
	c.Nrm = R;
}

void CVect2D::ProdVect(CVect2D a, CVect2D b)
{
	CVect2D R;
	R.X = a.Y - b.Y;
	R.Y = b.X - a.X;

}


CVect2D operator+(CVect2D a, CVect2D b)
{
	CVect2D R;
	R.X = a.X + b.X;
	R.Y = a.Y + b.Y;

	return R;
}

CVect2D operator-(CVect2D a, CVect2D b)
{
	CVect2D R;
	R.X = a.X - b.X;
	R.Y = a.Y - b.Y;

	return R;
}

CVect2D operator*(CVect2D a, CVect2D b)
{
	CVect2D R;
	R.X = a.X * b.X;
	R.Y = a.Y * b.Y;

	return R;
}

CVect2D operator*(CVect2D a, float f)
{
	CVect2D R;
	R.X = a.X * f;
	R.Y = a.Y * f;

	return R;
}

