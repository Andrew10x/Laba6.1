#include "Header.h";

rhombus::rhombus(float side, float h)
{
	a = side; 
	b = 0; c = 0;
	height = h; 
}

float rhombus ::square()
{
	S = a * height;
	return S;
}

float rhombus::perimeter()
{
	P = a * 4;
	return P;
}

rectangle::rectangle(float side1, float side2)
{
	a = side1;
	b = side2;
	c = 0;
}

float rectangle::square()
{
	S = a * b;
	return S;
}

float rectangle::perimeter()
{
	P = (a+b)*2;
	return P;
}

triangle::triangle(float side1, float side2, float side3)
{
	a = side1;
	b = side2;
	c = side3;
}

float triangle::square()
{
	S = a * b;
	return S;
}

float triangle::perimeter()
{
	P = a + b + c;
	return P;
}

