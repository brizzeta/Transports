#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
	double fuel_volume;
	int year;
	char* model;
public:
	Transport() = default;
	Transport(double v, int y, const char* m);
	Transport(int y, const char* m);
	void Init();
	void SetTransport(const char* m, const int y);
	void Show()const;
	virtual ~Transport() = 0;
};

