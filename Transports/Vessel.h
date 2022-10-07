#pragma once
#include "Transport.h"
class Vessel : public Transport
{
	string type_vessel;
public:
	Vessel() = default;
	Vessel(double v, int y, string m, string t);
	void Show() const;
	void Init();
};

