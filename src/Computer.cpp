// Oren Golan 318186517//
// Matan Polik 207419300//
#pragma once
#include "Computer.h"
#include "Cpu.h"
using std::cout;
using std::endl;


/**
 Constructor for Computer type :
 Order of initialization list -
 * 1. Cpu (Cpu type)
 * 2. The name of the manufacturer (string)
 * 3. Year of manufacturing (int)
 * 4. Computer color (string)
 * 5. If the computer is Laptop of not (boolean)
 **/

Computer::Computer(Cpu newCpu , string newManufacturerName, int newYearOfManufacture, string newColor, bool newLaptop) : comCpu(newCpu),year(newYearOfManufacture) , isLaptop(newLaptop)
{
//--------------Checking string size--------------//
	if (newManufacturerName.length() > 10) {
		cout << "manufacturer length is too long" << endl;
        manufacturer = "~";
	}
	else {
        manufacturer = newManufacturerName;
	}
	if (newColor.length() > 10) {
		cout << "color length is too long" << endl;
		comColor = "~";
	}
	else {
		comColor = newColor;
	}

}

/**********GETTERS AND SETTERS - for all Computer characters***********/

// --------------Manufacturer get/set methods--------------//
string Computer::getManufacturer()const
{
	return manufacturer;
}
void Computer::setManufacturer(const string& newManufacturerName)
{
	if (newManufacturerName.length() > 10) {
		cout << "manufacturer length is too long" << endl;
        manufacturer = "~";
	}
	else {
        manufacturer = newManufacturerName;
	}
}

// --------------Color get/set methods--------------//
string Computer::getColor()const
{
	return comColor;
}
void Computer::setColor(const string& newColor)
{
	if (newColor.length() <= 10) //checking size//
	{
		comColor = newColor;
	}
	else
	{
		cout << "color length is too long" << endl;
		comColor = "~";
	}
}

//-------------- Year get/set methods--------------//
int Computer::getYear()const
{
	return year;
}
void Computer::setYear(const int& newYear)
{
    year = newYear;
}

//-------------- IsLaptop get/set methods--------------//
bool Computer::getIsLaptop()const
{
	return isLaptop;
}
void Computer::setIsLaptop(const bool newLaptop)
{
	isLaptop = newLaptop;
}

// --------------Cpu get/set methods--------------//
Cpu Computer::getCpu()const
{
	return comCpu;
}
void Computer::setCpu(const Cpu& newCpu)
{
	comCpu = newCpu;
}


//-------------- Print method--------------//
void Computer::print()const
{
	{
		cout << "Cpu clockRate: " << comCpu.getClockRate() << endl;
		cout << "Cpu manufacturer: " << comCpu.getManufacturer() << endl;
		cout << "Cpu year: " << comCpu.getYear() << endl;
		cout << "Computer manufacturer: " << manufacturer << endl;
		cout << "Computer year: " << year << endl;
		cout << "Computer color: " << comColor << endl;
		cout << "Computer is laptop: ";
        if(isLaptop) cout<<"True"<<endl;
        else cout<<"False"<<endl;
	}

}
