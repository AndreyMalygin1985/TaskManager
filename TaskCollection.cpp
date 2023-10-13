#include "TaskCollection.h"
#include "Task.h"
#include "Menu.h"
#include<iostream>
using namespace std;

void TaskCollection::show()
{
	size_t sizeOptions = 0;
	for (size_t i = 0; i < sizeOptions; i++)
	{
		cout << "=====================================" << endl;
		Tasks[i].show();
		cout << endl;
	}
}

void TaskCollection::add()
{
	size_t sizeOptions = 0;
	Task* temp = new Task[sizeOptions + 1];
	for (size_t i = 0; i < sizeOptions; i++)
	{
		temp[i] = Tasks[i];
	}
	delete[] Tasks;
	Tasks = temp;

	Tasks[sizeOptions] = Task{};
	Tasks[sizeOptions].fillByUser();
	sizeOptions++;


}

