#pragma once
#include <iostream>
using namespace std;

class figure
{
protected:
	float a;
	float b;
	float c;
	float S;
	float P;
public:
	virtual float square() = 0;
};

class rhombus: public figure
{
	float height;
public:
	rhombus(float side, float h);
	float square();
	float perimeter();
};

class rectangle: public figure
{
public:
	rectangle(float side1, float side2);
	float square();
	float perimeter();
};

class triangle: public figure
{
public:
	triangle(float side1, float side2, float side3);
	float square();
	float perimeter();
};
