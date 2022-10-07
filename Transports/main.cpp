#include "Transport.h"
#include "Jeep.h"
#include "Bike.h"
#include "Plane.h"
#include "Truck.h" 
#include "Vessel.h"
#include "Conio.h"
#include <iostream>
using namespace std;

void Menu();

int main() {
	Menu();

	Transport* ptr = nullptr;
	int choice;
	cin >> choice;

	switch (choice) {
	case 1:
		ptr = new Jeep();
		break;
	case 2:
		ptr = new Plane();
		break;
	case 3:
		ptr = new Bike();
		break;
	case 4:
		ptr = new Truck();
		break;
	case 5:
		ptr = new Vessel();
		break;
	default:
		break;
	}
	system("cls");
	ptr->Init();
	ptr->Show();
}

void Menu()
{
	cout << "1. Jeep" << endl
	     << "2. Plane" << endl
	     << "3. Bike" << endl
	     << "4. Truck" << endl
	     << "5. Vessel" << endl;
}
