#pragma once
#include "Transport.h"
class Plane : public Transport
{
	double mass;
	char* type_engine;
public:
	Plane() = default;
	Plane(double v, int y, const char* m, double mas, const char* t);
	void Show()const;
	void Init();
	~Plane();
};

