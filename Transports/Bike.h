#pragma once
#include "Transport.h"

class Bike : public Transport
{
	short gears_num;
public:
	Bike() = default;
	Bike(int y, string m, short g);
	void Show() const;
	void Init();
};