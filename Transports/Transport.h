#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
	double fuel_volum;
	int year;
	string model;
public:
	Transport() = default;
	Transport(double v, int y, string m);
	Transport(int y, string m);
	virtual void Init() = 0;
	void SetTransport(const double v, const string m, const int y);
	virtual void Show() const = 0;
};

