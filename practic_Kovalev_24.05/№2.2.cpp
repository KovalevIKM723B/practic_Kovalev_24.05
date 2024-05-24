/*

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class Transport
{
protected:
	float Speed, Engine_power;
public:
	float get_Speed()
	{
		return Speed;
	}
	float get_Engine_power()
	{
		return Engine_power;
	}
};
class Car : public Transport
{
protected:
	float utility_factor;
public:
	Car() {};
	Car(float S, float Ep)
	{
		Speed = S;
		Engine_power = Ep;
	}
	float get_utility_factor()
	{
		utility_factor = Speed * Engine_power;
		return utility_factor;
	}
};
class Mororbike : public Transport
{
protected:
	float utility_factor;
public:
	Mororbike() {};
	Mororbike(float S, float Ep)
	{
		Speed = S;
		Engine_power = Ep;
	}
	float get_utility_factor()
	{
		utility_factor = 0.5 * Speed * Engine_power;
		return utility_factor;
	}
};
class Truck : public Transport
{
protected:
	float utility_factor;
public:
	Truck() {};
	Truck (float S, float Ep)
	{
		Speed = S;
		Engine_power = Ep;
	}
	float get_utility_factor()
	{
		utility_factor = 2 * Speed * Engine_power;
		return utility_factor;
	}
};



int main()
{
	Car first(200, 180);
	cout << "Car have " << first.get_Engine_power() << " HP engine and can accelerate to " << first.get_Speed() << " KPH. Total Utility Factor = " << first.get_utility_factor() << endl;
	Mororbike second(160, 75);
	cout << "Motorbike have " << second.get_Engine_power() << " HP engine and can accelerate to " << second.get_Speed() << " KMH. Total Utility Factor = " << second.get_utility_factor() << endl;
	Truck third(120, 300);
	cout << "Truck have " << third.get_Engine_power() << " HP engine and can accelerate to " << third.get_Speed() << " KPH. Total Utility Factor = " << third.get_utility_factor() << endl;
}

*/