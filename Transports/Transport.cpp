#include "Transport.h"
#include <iostream>

using namespace std;

Transport::Transport(double v, int y, string m)
{
	fuel_volum = v;
	year = y;
	model = m;
}

Transport::Transport(int y, string m)
{
	year = y;
	model = m;
}

void Transport::SetTransport(const double v, const string m, const int y)
{
	fuel_volum = v;
	model = m;
	year = y;
}