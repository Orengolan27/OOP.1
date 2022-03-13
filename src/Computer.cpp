#pragma once
#include "Computer.h"
#include"Cpu.h"
using std::cout;
using std::endl;

Computer::Computer(Cpu newCpu , string newManufactorerName, int newYearOfManufactore, string newColor, bool newLaptop) : comCpu(newCpu),year(newYearOfManufactore) , isLaptop(newLaptop)
{
//checking size//
	if (newManufactorerName.length() > 10) {
		cout << "manufacturer length is too long" << endl;
        manufacturer = "~";
	}
	else {
        manufacturer = newManufactorerName;
	}
	if (newColor.length() > 10) {
		cout << "color length is too long" << endl;
		comColor = "~";
	}
	else {
		comColor = newColor;
	}

}
// --------------Manufacturer get/set methods--------------//
string Computer::getManufactorer()const
{
	return manufacturer;
}
void Computer::setManufacturer(const string& newManufactorerName)
{
	if (newManufactorerName.length() > 10) {
		cout << "manufacturer length is too long" << endl;
        manufacturer = "~";
	}
	else {
        manufacturer = newManufactorerName;
	}
}
// --------------color get/set methods--------------//
string Computer::getColor()const
{
	return comColor;
}
void Computer::setColor(const string& newColor)
{
	if (newColor.length() <= 10)
	{
		comColor = newColor;
	}
	else
	{
		cout << "color length is too long" << endl;
		comColor = "~";
	}
}
//-------------- year get/set methods--------------//
int Computer::getYear()const
{
	return year;
}
void Computer::setYear(const int& newYear)
{
    year = newYear;
}
//-------------- laptop get/set methods--------------//
bool Computer::getIsLaptop()const
{
	return isLaptop;
}
void Computer::setIsLaptop(const bool newlap)
{
	isLaptop = newlap;
}
// --------------cpu get/set methods--------------//
Cpu Computer::getCpu()const
{
	return comCpu;
}
void Computer::setCpu(const Cpu& newCpu)
{
	comCpu = newCpu;
}
//-------------- print method--------------//
void Computer::print()const
{
	{
		cout << "Cpu clockRate: " << comCpu.getClockRate() << endl;
		cout << "Cpu manufacturer: " << comCpu.getManufacturerName() << endl;
		cout << "Cpu year: " << comCpu.getYear() << endl;
		cout << "Computer manufacturer: " << manufacturer << endl;
		cout << "Computer year: " << year << endl;
		cout << "Computer color: " << comColor << endl;
		cout << "Computer is laptop: ";
        if(isLaptop) cout<<"True"<<endl;
        else cout<<"False"<<endl;
	}

}
