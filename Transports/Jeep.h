#pragma once
#include "Transport.h"

class Jeep : public Transport
{
	char* drive_unit;
public:
	Jeep() = default;
	Jeep(double v, int y, const char* m, const char* u);
	void Show() const;
	void Init();
	~Jeep();
};