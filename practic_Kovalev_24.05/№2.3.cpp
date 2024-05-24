/*

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class Electronic
{
protected:
	string Name;
	int tSize, Size1, Size2;
public:
	string get_Name()
	{
		return Name;
	}
	void get_Resolution()
	{
		cout << "Resolution of screen: " << Size1 << " x " << Size2 << endl;
	}
	int get_tSize()
	{
		tSize = Size1 * Size2;
		return tSize;
	}
};
class Smartphone : public Electronic
{
public:
	Smartphone() {};
	Smartphone(int S1, int S2, string N)
	{
		Size1 = S1;
		Size2 = S2;
		Name = N;
	}
};
class Tablet : public Electronic
{
public:
	Tablet() {};
	Tablet(int S1, int S2, string N)
	{
		Size1 = S1;
		Size2 = S2;
		Name = N;
	}
};
class Laptop : public Electronic
{
public:
	Laptop() {};
	Laptop(int S1, int S2, string N)
	{
		Size1 = S1;
		Size2 = S2;
		Name = N;
	}
};



int main()
{
	Smartphone first(1080, 2400, "Poco F3");
	cout << "Smartphone model '" << first.get_Name() << "' total have " << first.get_tSize() << " pixels" << endl;
	first.get_Resolution();
	Tablet second(2944, 1840, "Lenovo Tab P12");
	cout << "Tablet model '" << second.get_Name() << "' total have " << second.get_tSize() << " pixels" << endl;
	second.get_Resolution();
	Laptop third(1920, 1080, "Lenovo Legion 5 15");
	cout << "Tablet model '" << third.get_Name() << "' total have " << third.get_tSize() << " pixels" << endl;
	third.get_Resolution();
}

*/