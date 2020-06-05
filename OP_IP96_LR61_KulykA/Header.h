#pragma once
#include <iostream>
using namespace std;

class figure // ����������� �����
{
protected:
	float a; //a, b, c - �������
	float b;
	float c;
	float S; //S, P - ������� � ��������
	float P;
public:
	virtual float square() = 0; //����� ���������� �������
	virtual float perimeter() = 0;
};

class rhombus: public figure // ����� ����
{
	float height;
public:
	rhombus(float side, float h);
	float square();
	float perimeter();
};

class rectangle: public figure // ����� �������������
{
public:
	rectangle(float side1, float side2);
	float square();
	float perimeter();
};

class triangle: public figure // ����� �����������
{ 
	float h;
public:
	triangle(float side1, float side2, float side3, float h);
	float square();
	float perimeter();
};

void show_S_P(figure&); //���������� ������� � ��������
void interface(); //���������

