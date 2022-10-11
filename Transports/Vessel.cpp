#include "Vessel.h"
#include <iostream>
using namespace std;
using namespace vessel;

Vessel::Vessel(double v, int y, const char* m, const char* t) : Transport(v, y, m)
{
	type_vessel = new char[strlen(t) + 1];
	strcpy_s(type_vessel, strlen(t) + 1, t);
}

void Vessel::Show() const
{
	Transport::Show();
	cout << "Type vessel: " << type_vessel << endl
	    << "Fuel volume: " << fuel_volume << endl;
}

void Vessel::Init()
{
	Transport::Init();
	cout << "Enter fuel volume: ";
	cin >> fuel_volume;
	system("cls");
	cout << "Enter type vessel: ";
	cin >> type_vessel;
	system("cls");
}

Vessel::~Vessel() {
	Transport::~Transport();
	delete[] type_vessel;
}
