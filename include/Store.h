#pragma once
#define MAX_COMPUTERS_NUMBER 10
#include "Computer.h"
#include"Cpu.h"

class Store
{
	string name;
	Computer computers[MAX_COMPUTERS_NUMBER];
	int number;

public:
	Store(string newStoreName = "~",int newComputersNumber = 0);
	~Store() = default;

	//class gets//
	string getName()const;
	int getNumber()const;
    Computer* getComputers();

	//class sets//
	void setName(const string& newStoreName);
    void setNumber(const int newNumber);
    void setComputers(const Computer*& newComputers);
	void addComputer(const Computer& Computer);

	//print//
	void printComputersByName();
	void printComputersByYear();

};

