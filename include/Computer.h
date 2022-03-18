// Oren Golan 318186517//
// Matan Polik 207419300//
#pragma once
#include "Cpu.h"
#include <string>
using std::string;

class Computer
{
	bool isLaptop;
	int year;
	string manufacturer;
	string comColor;
	Cpu comCpu;

public:
	Computer(Cpu newCpu = (0, "~", 0), string newManufacturerName = "~", int newYearOfManufacture = 0, string newColor = "~", bool newLaptop = false);
	~Computer() = default;
	//--------------class gets--------------//
	string getManufacturer()const;
	string getColor()const;
	int getYear()const;
	bool getIsLaptop()const;
	Cpu getCpu()const;

	//--------------class sets--------------//
	void setManufacturer(const string& newManufacturerName);
	void setColor(const string& newColor);
	void setYear(const int& newYear);
	void setIsLaptop(const bool newLaptop);
	void setCpu(const Cpu& newCpu);

	//--------------print--------------//
	void print()const;




};

