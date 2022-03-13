#pragma once
#define MAX_COMPUTERS_NUMBER 10
#include "Computer.h"
#include"Cpu.h"

class Store
{
	string storeName;
	Computer computers[MAX_COMPUTERS_NUMBER];
	int computersNumber;

public:
	Store(string newStoreName = "~",int newComputersNumber = 0);
	~Store() = default;

	//class gets//
	string getName()const;
	int getComputersNumber()const;

	//class sets//
	void setStoreName(const string& newStoreName);
	void addComputer(const Computer& Computer);

	//print//
	void printComputersByName();
	void printComputersByYear();

};

