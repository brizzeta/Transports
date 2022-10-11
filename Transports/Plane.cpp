#include "Plane.h"
#include <iostream>
using namespace std;
using namespace plane;

Plane::Plane(double v, int y, const char* m, double mas, const char* t):Transport(v, y, m)
{
	mass = mas;
	type_engine = new char[strlen(t) + 1];
	strcpy_s(type_engine, strlen(t) + 1, t);
}

void Plane::Show()const
{
	Transport::Show();
	cout << "Mass: " << mass << endl
	     << "Fuel volum: " << fuel_volume << endl
		<< "Type of engine: " << type_engine;
}

void Plane::Init() 
{
	Transport::Init();
	cout << "Enter fuel volume: ";
	cin >> fuel_volume;
	system("cls");
	cout << "Enter mass: ";
	cin >> mass;
	system("cls");
	cout << "Enter type of engine: ";
	cin >> type_engine;
	system("cls");
}

Plane::~Plane() {
	Transport::~Transport();
	delete[] type_engine;
}
