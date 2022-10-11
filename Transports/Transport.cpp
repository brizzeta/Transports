#include "Transport.h"
#include <iostream>
using namespace std;
using namespace transport;

Transport::Transport(double v, int y, const char* m)
{
	fuel_volume = v;
	year = y;
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

Transport::Transport(int y, const char* m)
{
	year = y;
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

void Transport::Init()
{
	cout << "Enter year: ";
	cin >> year;
	system("cls");
	cout << "Enter model: ";
	cin >> model;
	system("cls");
}

void Transport::Show()const {
	cout << "Model: " << model << endl
		<< "Year: " << year << endl;
}

Transport::~Transport() {
	delete[] model;
}