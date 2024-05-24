/*

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class Figure
{
protected:
	string Color;
	float pi = 3.14;
public:
	string get_Color()
	{
		return Color;
	}
};
class Circle : public Figure
{
protected:
	int Radius;
	float Square;
public:
	Circle() {};
	Circle(int R, string C)
	{
		Radius = R;
		Color = C;
	}
	float get_Circle_Area()
	{
		Square = pi * pow(Radius, 2);
		return Square;
	}
};
class Rectangle : public Figure
{
protected:
	float Square, Side1, Side2;
public:
	Rectangle() {};
	Rectangle(float S1, float S2, string C) 
	{
		Color = C;
		Side1 = S1;
		Side2 = S2;
	};
	float get_Ractangle_Area()
	{
		Square = Side1 * Side2;
		return Square;
	}
};
class Triangle : public Figure
{
protected:
	float Side1, Side2, Side3, half_perimeter, Square;
public:
	Triangle() {};
	Triangle(float S1, float S2, float S3, string C)
	{
		Color = C;
		Side1 = S1;
		Side2 = S2;
		Side3 = S3;
	}
	float get_Triangle_Area()
	{
		float half_perimeter = (Side1 + Side2 + Side3) / 2;
		Square = sqrt(half_perimeter * (half_perimeter - Side1) * (half_perimeter - Side2) * (half_perimeter - Side3));
		return Square;
	}
};





int main()
{
	Circle first_figure(8, "Red");
	cout << first_figure.get_Color() << " circle has an area: " << first_figure.get_Circle_Area() << endl;
	Rectangle second_figure(10.5, 5, "Blue");
	cout << second_figure.get_Color() << " rectangle has an area: " << second_figure.get_Ractangle_Area() << endl;
	Triangle third_figure(10, 12, 15, "Green");
	cout << third_figure.get_Color() << " triangle has an area: " << third_figure.get_Triangle_Area() << endl;
}

*/