#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(double v, int y, string m, string t) : Transport(v, y, m)
{
	cargo_type = t;
}

void Truck::Show() const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Cargo type: " << cargo_type << endl;
	cout << "Fuel volum: " << fuel_volum << endl;
}

void Truck::Init()
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
	cout << "Enter cargo type: ";
	cin >> cargo_type;
	system("cls");
}
