// Oren Golan 318186517//
// Matan Polik 207419300//
#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Cpu
{
    //--------------private--------------//
	double clockRate;
	int year;
	string manufacturer;

public:
	Cpu(double newClock = 0,string newName = "~", int newYear = 0);
	~Cpu() = default;
	//--------------class gets--------------//
	double getClockRate()const;
	int getYear()const;
	string getManufacturer()const;

	//class sets//
	void setClockRate(const double& newClockRate);
	void setYear(const int& newYearOfManufacturing);
	void setManufacturer(const string& newManufacturerName);
	//print func//
	void print()const;

};