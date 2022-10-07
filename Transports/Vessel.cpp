#include "Vessel.h"
#include <iostream>
using namespace std;

Vessel::Vessel(double v, int y, string m, string t) : Transport(v, y, m)
{
	type_vessel = t;
}

void Vessel::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Type vesse: " << type_vessel << endl;
	cout << "Fuel volum: " << fuel_volum << endl;
}

void Vessel::Init()
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
	cout << "Enter type vessel: ";
	cin >> type_vessel;
	system("cls");
}
