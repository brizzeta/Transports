#include "Jeep.h"
#include "Transport.h"
#include <iostream>
using namespace std;

Jeep::Jeep(double v, int y, string m, string u) : Transport(v, y, m)
{
	drive_unit = u;
}

void Jeep::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Drive unit: " << drive_unit << endl;
	cout << "Fuel volume: " << fuel_volum << endl;
}

void Jeep::Init()
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
	cout << "Enter drive unit: ";
	cin >> drive_unit;
	system("cls");
}
