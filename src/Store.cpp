#include "Store.h"
#include "Computer.h"
#include "Cpu.h"

Store::Store(string newStoreName,int newComputersNumber) :
	computersNumber(newComputersNumber)
{
	if (newStoreName.length() > 10) {
		cout << "Store's name length is too long" << endl;
		storeName = "~";
	}
	else {
		storeName = newStoreName;
	}
}
// --------------name get/set methods--------------//
string Store::getName()const
{
	return storeName;
}
void Store::setStoreName(const string& newStoreName)
{
	if (newStoreName.length() > 10) {
		cout << "Store's name length is too long" << endl;
		storeName = "~";
	}
	else {
		storeName = newStoreName;
	}
}
// --------------computer number get method--------------//
int Store::getComputersNumber()const
{
	return computersNumber;
}
// --------------add computer method--------------//
void Store::addComputer(const Computer& Computer)
{
	if (computersNumber >= MAX_COMPUTERS_NUMBER)
	{
		cout << "The store is full!" << endl;
	}
	else
	{
		computers[computersNumber] = Computer;
		computersNumber++;
	}
}
// --------------print methods--------------//
void Store::printComputersByName()
{
	cout << "There are " << computersNumber << "computers in the store. The computers:" << endl;
	int i, j;
	Computer tempstore[MAX_COMPUTERS_NUMBER];
	for (i = 0; i < computersNumber; i++)
	{
		tempstore[i] = computers[i];
	}

	Computer temp1, temp2;
	string string1, string2;
	for (i = computersNumber - 1; i >= 0; i--)
	{
		for (j = 0; j < computersNumber - 1; j++)
		{
			temp1 = tempstore[j];
			temp2 = tempstore[j + 1];
			string1 = temp1.getManufactorer();
			string2 = temp2.getManufactorer();
			if (string1.compare(string2) > 0)
			{
				tempstore[j + 1] = temp1;
				tempstore[j] = temp2;
			}

		}
	}
	for (i = 0; i < computersNumber; i++)
	{
        cout<<"Computer "<<i+1<<endl;
		tempstore[i].print();
		cout << endl;
	}
}


void Store::printComputersByYear()
{
	cout << "There are " << computersNumber << " computers in the store. The computers:" << endl;
	int i, j;
	Computer tempstore[MAX_COMPUTERS_NUMBER];
	for (i = 0; i < computersNumber; i++)
	{
		tempstore[i] = computers[i];
	}
	Computer temp1, temp2;
	for (i = computersNumber - 1; i >= 0; i--)
	{
		for (j = 0; j < computersNumber - 1; j++)
		{
			temp1 = tempstore[j];
			temp2 = tempstore[j + 1];
			if (temp1.getYear() > temp2.getYear())
			{
				tempstore[j + 1] = temp1;
				tempstore[j] = temp2;
			}
		}
	}
	for (i = 0; i < computersNumber; i++)
	{
        cout<<"Computer "<<i+1<<endl;
		tempstore[i].print();
		cout << endl;
	}
}


