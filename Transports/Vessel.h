#pragma once
#include "Transport.h"
class Vessel : public Transport
{
	char* type_vessel;
public:
	Vessel() = default;
	Vessel(double v, int y, const char* m, const char* t);
	void Show() const;
	void Init();
	~Vessel();
};

