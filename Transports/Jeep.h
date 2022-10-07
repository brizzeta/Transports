#pragma once
#include "Transport.h"

class Jeep : public Transport
{
	string drive_unit;
public:
	Jeep() = default;
	Jeep(double v, int y, string m, string u);
	void Show() const;
	void Init();
};