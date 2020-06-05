#pragma once
#include <iostream>
using namespace std;

class figure // абстрактный класс
{
protected:
	float a; //a, b, c - стороны
	float b;
	float c;
	float S; //S, P - площадь и периметр
	float P;
public:
	virtual float square() = 0; //чисто виртуалные функции
	virtual float perimeter() = 0;
};

class rhombus: public figure // класс ромб
{
	float height;
public:
	rhombus(float side, float h);
	float square();
	float perimeter();
};

class rectangle: public figure // класс прямоугольник
{
public:
	rectangle(float side1, float side2);
	float square();
	float perimeter();
};

class triangle: public figure // класс треугольник
{ 
	float h;
public:
	triangle(float side1, float side2, float side3, float h);
	float square();
	float perimeter();
};

void show_S_P(figure&); //показывает площадь и периметр
void interface(); //интерфейс

