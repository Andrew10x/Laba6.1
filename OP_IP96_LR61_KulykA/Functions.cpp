#include "Header.h";

rhombus::rhombus(float side, float h)
{
	a = side; 
	b = 0; c = 0;
	height = h; 
}

float rhombus ::square()
{
	cout << "Rhombus" << endl;
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
	cout << "Rectangle" << endl;
	S = a * b;
	return S;
}

float rectangle::perimeter()
{
	P = (a+b)*2;
	return P;
}

triangle::triangle(float side1, float side2, float side3, float height)
{
	a = side1;
	b = side2;
	c = side3;
	h = height;
}

float triangle::square()
{
	cout << "Triangle" << endl;
	S = (a * h)/2;
	return S;
}

float triangle::perimeter()
{
	P = a + b + c;
	return P;
}

void show_S_P(figure& a)
{
	cout << "S=" << a.square() << endl;
	cout << "P=" << a.perimeter() << endl;
}

void interface()
{
	cout << "Find square and perimeter for figures:" << endl;
	figure* p;
	float S, P;
	float a, b, c, h;
	int flag = 9;
	while (flag != 0)
	{
		cout << "Choose: 1 - rhombus, 2 - rectangle, 3 - triangle, 0 - exit:" << endl;
		cin >> flag;
		if (flag == 1)
		{
			cout << "Input side and height:" << endl;
			cin >> a >> h;
			p = new rhombus(a, h);
			show_S_P(*p);
		}
		if (flag == 2)
		{
			cout << "Input side1 and side2:" << endl;
			cin >> a >> b;
			p = new rectangle(a, b);
			show_S_P(*p);
		}
		if (flag == 3)
		{
			cout << "Input side1, side2, side3 and height to side1" << endl;
			cin >> a >> b >> c >> h;
			p = new triangle(a, b, c, h);
			show_S_P(*p);
		}
	}
}

