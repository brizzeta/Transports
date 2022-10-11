#pragma once
#include "Transport.h"
using namespace transport;

namespace truck {
	class Truck : public Transport
	{
		char* cargo_type;
	public:
		Truck() = default;
		Truck(double v, int y, const char* m, const char* t);
		void Show() const;
		void Init();
		~Truck();
	};
}
