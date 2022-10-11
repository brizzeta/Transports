#pragma once
#include "Transport.h"
using namespace transport;

namespace bike {
	class Bike : public Transport
	{
		short gears_num;
		char* frame_shape;
	public:
		Bike() = default;
		Bike(int y, const char* m, short g, const char* f);
		void Show() const;
		void Init();
		~Bike();
	};
}