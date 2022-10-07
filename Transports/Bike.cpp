#include "Bike.h"
#include <iostream>
using namespace std;

Bike::Bike(int y, string m, short g): Transport(y, m)
{
	gears_num = g;
}

void Bike::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Gears number: " << gears_num << endl;
}

void Bike::Init()
{
	cout << "Enter fuel volum: ";
	cin >> fuel_volum;
	system("cls");
	cout << "Enter model: ";
	cin >> model;
	system("cls");
	cout << "Enter year: ";
	cin >> year;
	system("cls");
	cout << "Enter number of gears: ";
	cin >> gears_num;
	system("cls");
}
