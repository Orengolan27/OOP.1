// Oren Golan 318186517//
// Matan Polik 207419300//
#include "Cpu.h"
using std::cout;
using std::endl;

/**
 Constructor for Cpu type :
 * Order of initialization list -
 * 1. Clockrate speed in GHz (double)
 * 2. The name of the manufacturer (string)
 * 3. Year of manufacturing (int)
 */

Cpu::Cpu(double newClock,string newName, int newYear) : clockRate(newClock), year(newYear) {
	if (newName.length() > 10) {
		cout << "manufacturer length is too long" << endl;
        manufacturer = "~";
	}
	else {
        manufacturer = newName;
	}
}

//--------------ClockRate get/set methods--------------//
double Cpu::getClockRate()const
{
	return clockRate;
}
void Cpu::setClockRate(const double& newClockRate)
{
	clockRate = newClockRate;
}

//--------------Year get/set methods--------------//
int Cpu::getYear()const
{
	return year;
}
void Cpu::setYear(const int& newYearOfManufacturing)
{
	year = newYearOfManufacturing;
}

//--------------Manufacturer get/set methods--------------//
string Cpu::getManufacturer()const
{
	return manufacturer;
}
void Cpu::setManufacturer(const string& newManufacturerName)
{
	if (newManufacturerName.length() <= 10)
	{
        manufacturer = newManufacturerName;
	}
	else
	{
		cout << "manufacturer length is too long" << endl;
        manufacturer = "~";

	}
}

//--------------Print method--------------//
void Cpu::print()const
{
	cout << "Cpu clockRate: " << clockRate<< endl;
	cout << "Cpu manufacturer: " << manufacturer << endl;
	cout << "Cpu year: " << year << endl;

}
