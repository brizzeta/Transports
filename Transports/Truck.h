#pragma once
#include "Transport.h"

class Truck : public Transport
{
	string cargo_type;
public:
	Truck() = default;
	Truck(double v, int y, string m, string t);
	void Show() const;
	void Init();
};

