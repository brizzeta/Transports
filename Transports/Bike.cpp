#include "Bike.h"
#include <iostream>
using namespace std;
using namespace bike;

Bike::Bike(int y, const char* m, short g, const char* f): Transport(y, m)
{
	gears_num = g;
	frame_shape = new char[strlen(f) + 1];
	strcpy_s(frame_shape, strlen(f) + 1, f);
}

void Bike::Show() const
{
	Transport::Show();
	cout << "Gears number: " << gears_num << endl
		<< "Frame shape: " << frame_shape;
}

void Bike::Init()
{
	Transport::Init();
	cout << "Enter number of gears: ";
	cin >> gears_num;
	system("cls");
	cout << "Enter frame shape: ";
	cin >> frame_shape;
	system("cls");
}

Bike::~Bike() {
	Transport::~Transport();
	delete[] frame_shape;
}
