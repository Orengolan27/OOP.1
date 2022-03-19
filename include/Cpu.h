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

    //--------------Constructor & Destructor--------------//
    Cpu(double newClock = 0,string newName = "~", int newYear = 0);
	~Cpu() = default;

	//--------------Getters--------------//
	double getClockRate()const;
	int getYear()const;
	string getManufacturer()const;

	//---------------Setters----------------//
	void setClockRate(const double& newClockRate);
	void setYear(const int& newYearOfManufacturing);
	void setManufacturer(const string& newManufacturerName);

    //-------------print function------------//
	void print()const;

};