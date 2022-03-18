#include "Store.h"
#include "Computer.h"
#include "Cpu.h"

Store::Store(string newStoreName,int newComputersNumber) :
	number(newComputersNumber)
{
	if (newStoreName.length() > 10) {
		cout << "Store's name length is too long" << endl;
		name = "~";
	}
	else {
		name = newStoreName;
	}
}
 //--------------name get/set methods--------------//
string Store::getName()const
{
	return name;
}
void Store::setName(const string& newStoreName)
{
	if (newStoreName.length() > 10) {
		cout << "Store's name length is too long" << endl;
		name = "~";
	}
	else {
		name = newStoreName;
	}
}
// --------------computer number get/set method--------------//
int Store::getNumber()const
{
	return number;
}
void Store::setNumber(const int newNumber)
{
    number=newNumber;
}
// --------------computer get/set method--------------//
Computer *Store::getComputers()
{
    return this->computers;
}
void Store::setComputers(const Computer *&newComputers)
{
    for(int i=0;i<MAX_COMPUTERS_NUMBER;i++)
    {
        computers[i]=newComputers[i];
    }
}
// --------------add computer method--------------//
void Store::addComputer(const Computer& Computer)
{
	if (number >= MAX_COMPUTERS_NUMBER)
	{
		cout << "The store is full!" << endl;
	}
	else
	{
		computers[number] = Computer;
		number++;
	}
}
// --------------print methods--------------//
void Store::printComputersByName()
{
	cout << "There are " << number << " computers in the store. The computers:" << endl;
	int i, j;
	Computer tempstore[MAX_COMPUTERS_NUMBER];
	for (i = 0; i < number; i++)
	{
		tempstore[i] = computers[i];
	}

	Computer temp1, temp2;
	string string1, string2;
	for (i = number - 1; i >= 0; i--)
	{
		for (j = 0; j < number - 1; j++)
		{
			temp1 = tempstore[j];
			temp2 = tempstore[j + 1];
			string1 = temp1.getManufacturer();
			string2 = temp2.getManufacturer();
			if (string1.compare(string2) > 0)
			{
				tempstore[j + 1] = temp1;
				tempstore[j] = temp2;
			}

		}
	}
	for (i = 0; i < number; i++)
	{
        cout<<"Computer "<<i+1<<endl;
		tempstore[i].print();
		cout << endl;
	}
}


void Store::printComputersByYear()
{
	cout << "There are " << number << " computers in the store. The computers:" << endl;
	int i, j;
	Computer tempstore[MAX_COMPUTERS_NUMBER];
	for (i = 0; i < number; i++)
	{
		tempstore[i] = computers[i];
	}
	Computer temp1, temp2;
	for (i = number - 1; i >= 0; i--)
	{
		for (j = 0; j < number - 1; j++)
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
	for (i = 0; i < number; i++)
	{
        cout<<"Computer "<<i+1<<endl;
		tempstore[i].print();
		cout << endl;
	}
}




