/*

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class Triangle
{
private:
	int Side1, Side2, Side3;
	float Perimeter, Square;
public:
	void set_Side1(int a)
	{
		Side1 = a;
	}
	void set_Side2(int b)
	{
		Side2 = b;
	}
	void set_Side3(int c)
	{
		Side3 = c;
	}
	float find_Perimeter(int Side1, int Side2, int Side3)
	{
		Perimeter = Side1 + Side2 + Side3;
		return Perimeter;
	}
	float find_Square(int Side1, int Side2, int Side3)
	{
		float find_Perimeter();
		float half_Perimeter = Perimeter / 2;
		Square = sqrt(half_Perimeter * (half_Perimeter - Side1) * (half_Perimeter - Side2) * (half_Perimeter - Side3));
		return Square;
	}
	void get_Perimeter()
	{
		cout << Perimeter;
	}
	void get_Square()
	{
		cout << Square;
	}
	void check(int Side1, int Side2, int Side3)
	{
		if (Side1 == sqrt (pow (Side2, 2) + pow(Side3, 2)))
		{
			cout << "Right triangle" << endl;
		}
		else if (Side2 == sqrt(pow(Side1, 2) + pow(Side3, 2)))
		{
			cout << "Right triangle" << endl;
		}
		else if (Side3 == sqrt(pow(Side2, 2) + pow(Side3, 2)))
		{
			cout << "Right triangle" << endl;
		}
		else
		{
			cout << "Not right tringle" << endl;
		}
	}
};


int main()
{
	int Side1, Side2, Side3;
	float Perimeter, Square;
	Triangle firts;
	cout << "Enter the lengths of the sides:" << endl;
	cin >> Side1;
	firts.set_Side1(Side1);
	cin >> Side2;
	firts.set_Side2(Side2);
	cin >> Side3;
	firts.set_Side3(Side3);
	cout << "Perimeter = " << firts.find_Perimeter(Side1, Side2, Side3) << endl;
	cout << "Square = " << firts.find_Square(Side1, Side2, Side3) << endl;
	firts.check(Side1, Side2, Side3);
}

*/
