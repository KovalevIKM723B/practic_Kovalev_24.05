/*

#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    string Name;
    int Age;
    float Average;
public:
    string get_Name()
    {
        return Name;
    }
    int get_Age()
    {
        return Age;
    }
    float get_Average()
    {
        return Average;
    }
    void set_Name(string N)
    {
        Name = N;
    }
    void set_Age(int Ag)
    {
        Age = Ag;
    }
    void set_Average(float Av)
    {
        Average = Av;
    }
    void get_Info()
    {
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
        cout << "Average mark : " << Average << endl;
    }
};





int main()
{
    cout << "How much students?" << endl;
    int a; 
    string Name;
    int Age;
    float Average;
    cin >> a;
    Student* Students = new Student[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Enter name" << endl;
        cin >> Name;
        Students[i].set_Name(Name);
        cout << "Enter age" << endl;
        cin >> Age;
        Students[i].set_Age(Age);
        cout << "Enter average mark" << endl;
        cin >> Average;
        Students[i].set_Average(Average);
    }
    cout << "Name of firts student: " << Students[0].get_Name() << endl;
    cout << "Average mark of second student: " << Students[1].get_Average() << endl;
    cout << "Information of all students:" << endl;
    for (int i = 0; i < a; i++)
    {
        Students[i].get_Info();
    }
}

*/
