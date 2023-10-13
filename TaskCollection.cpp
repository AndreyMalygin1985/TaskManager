#include "TaskCollection.h"
#include "Task.h"
#include "Menu.h"
#include<iostream>
#include<stdio.h>
using namespace std;

void TaskCollection::show()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "=====================================" << endl;
		Tasks[i].show();
		cout << endl;
	}
}

void TaskCollection::add()
{
	Task* temp = new Task[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = Tasks[i];
	}
	delete[] Tasks;
	Tasks = temp;

	Tasks[size] = Task{};
	Tasks[size].fillByUser();
	size++;
}
void TaskCollection::save()
{
	FILE* db_file{};
	fopen_s(&db_file,"db.txt", "w");
	if (db_file == NULL)
	{
		cout << "Ошибка сохранения в файл";
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		fprintf(db_file, "%d %d %d %d %d\n", Tasks[i].deadline.tm_year, Tasks[i].deadline.tm_mon, 
				Tasks[i].deadline.tm_mday, Tasks[i].deadline.tm_hour, Tasks[i].deadline.tm_min);
		fprintf(db_file, "%d\n", Tasks[i].priority);
		fprintf(db_file, "%s\n", Tasks[i].name);
		fprintf(db_file, "%s\n", Tasks[i].opisanie);
	}
	if (fclose(db_file) == EOF)
	{
		cout << "Ошибка закрытия файла";
	}

	return;

}

void TaskCollection::load()
{

}



