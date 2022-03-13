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
	Computer(Cpu newcpu = (0, "~", 0), string newManufactorerName = "~", int newYearOfManufactore = 0, string newColor = "~", bool newLaptop = false);
	~Computer() = default;
	//class gets//
	string getManufactorer()const;
	string getColor()const;
	int getYear()const;
	bool getIsLaptop()const;
	Cpu getCpu()const;

	//class sets//
	void setManufacturer(const string& newManufactorerName);
	void setColor(const string& newColor);
	void setYear(const int& newYear);
	void setIsLaptop(const bool newlap);
	void setCpu(const Cpu& newCpu);

	//print//
	void print()const;




};

