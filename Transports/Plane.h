#pragma once
#include "Transport.h"
class Plane : public Transport
{
	double mass;
public:
	Plane() = default;
	Plane(double v, int y, string m, double mas);
	void Show()const;
	void Init();
};

