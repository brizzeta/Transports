#include "Plane.h"
#include <iostream>
using namespace std;

Plane::Plane(double v, int y, string m, double mas):Transport(v, y, m)
{
	mass = mas;
}

void Plane::Show()const
{
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
	cout << "Mass: " << mass << endl;
	cout << "Fuel volum: " << fuel_volum << endl;
}

void Plane::Init() 
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
	cout << "Enter mass: ";
	cin >> mass;
	system("cls");
}
