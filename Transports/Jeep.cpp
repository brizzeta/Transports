#include "Jeep.h"
#include "Transport.h"
#include <iostream>
using namespace std;

Jeep::Jeep(double v, int y, const char* m, const char* u) : Transport(v, y, m)
{
	drive_unit = new char[strlen(u) + 1];
	strcpy_s(drive_unit, strlen(u) + 1, u);
}

void Jeep::Show() const
{
	Transport::Show();
	cout << "Drive unit: " << drive_unit << endl
		<< "Fuel volume: " << fuel_volume << endl;
}

void Jeep::Init()
{
	Transport::Init();
	cout << "Enter fuel volum: ";
	cin >> fuel_volume;
	system("cls");
	cout << "Enter drive unit: ";
	cin >> drive_unit;
	system("cls");
}

Jeep::~Jeep() {
	Transport::~Transport();
	delete[] drive_unit;
}
