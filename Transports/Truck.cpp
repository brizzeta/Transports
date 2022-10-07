#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(double v, int y, const char* m, const char* t) : Transport(v, y, m)
{
	cargo_type = new char[strlen(t) + 1];
	strcpy_s(cargo_type, strlen(t) + 1, t);
}

void Truck::Show() const
{
	Transport::Show();
	cout << "Cargo type: " << cargo_type << endl;
	cout << "Fuel volume: " << fuel_volume << endl;
}

void Truck::Init()
{
	Transport::Init();
	cout << "Enter fuel volume: ";
	cin >> fuel_volume;
	system("cls");
	cout << "Enter cargo type: ";
	cin >> cargo_type;
	system("cls");
}

Truck::~Truck() {
	Transport::~Transport();
	delete[] cargo_type;
}