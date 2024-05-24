/*
 
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class Books
{
private:
	string Name;
	string Autor;
	string Book_genre;
	int Year;
public:
	void set_Name(string N)
	{
		Name = N;
	}
	void set_Autor(string A)
	{
		Autor = A;
	}
	void set_Book_genre(string Bg)
	{
		Book_genre = Bg;
	}
	void set_Year(int Y)
	{
		Year = Y;
	}
	string get_Name()
	{
		return Name;
	}
	string get_Autor()
	{
		return Autor;
	}
	string get_Book_genre()
	{
		return Book_genre;
	}
	int get_Year()
	{
		return Year;
	}
	void get_Info()
	{
		cout << "Information of book" << endl << endl;
		cout << "Book name: " << Name << endl;
		cout << "Autor name: " << Autor << endl;
		cout << "Book genre: " << Book_genre << endl;
		cout << "Year of issue: " << Year << endl;
	}
};


int main()
{
	string Name;
	string Autor;
	string Book_genre;
	int Year;
	Books Book;
	cout << "Enter book name" << endl;
	cin >> Name;
	Book.set_Name(Name);
	cout << "Enter autor" << endl;
	cin >> Autor;
	Book.set_Autor(Autor);
	cout << "Enter book genre" << endl;
	cin >> Book_genre;
	Book.set_Book_genre(Book_genre);
	cout << "Enter year of issue" << endl;
	cin >> Year;
	Book.set_Year(Year);
	Book.get_Info();
}

*/