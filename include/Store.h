// Oren Golan 318186517//
// Matan Polik 207419300//
#pragma once
#define MAX_COMPUTERS_NUMBER 10
#include "Computer.h"
#include"Cpu.h"

class Store
{
    //--------------private--------------//
    string name;
	Computer computers[MAX_COMPUTERS_NUMBER];
	int number;

public:

    //--------------Constructor & Destructor--------------//
    Store(string newStoreName = "~",int newComputersNumber = 0);
	~Store() = default;

	//---------------Getters---------------//
	string getName()const;
	int getNumber()const;
    Computer* getComputers();

	//-----------------Setters---------------//
	void setName(const string& newStoreName);
    void setNumber(const int newNumber);
    void setComputers(const Computer*& newComputers);
	void addComputer(const Computer& Computer);

	//------------------print function------------//
	void printComputersByName();
	void printComputersByYear();

};

