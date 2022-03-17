#include "Cpu.h"
using std::cout;
using std::endl;

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
//--------------year get/set methods--------------//
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
//--------------print method--------------//
void Cpu::print()const
{
	cout << "Cpu clockRate: " << clockRate<< endl;
	cout << "Cpu manufacturer: " << manufacturer << endl;
	cout << "Cpu year: " << year << endl;

}
