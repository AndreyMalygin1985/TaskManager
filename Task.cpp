#include "Task.h"
#include <iostream>
#include <ctime>
using namespace std;

void Task::show()
{
	cout << "Дата: " << deadline.tm_mday << "." << deadline.tm_mon + 1 << "." << deadline.tm_year + 1900 << "." << deadline.tm_hour << ":" << deadline.tm_min << endl;
	cout << "Важность: " << priority << endl;
	cout << "Название: " << name << endl;
	cout << "Описание: " << opisanie << endl;
}

void Task::fillByUser()
{
	int int_temp = 0;
	cout << "Укажите год: ";
	cin >> int_temp;
	deadline.tm_year = int_temp - 1900;
	cout << "Укажите месяц: ";
	cin >> int_temp;
	deadline.tm_mon = int_temp - 1;
	cout << "Укажите день: ";
	cin >> deadline.tm_mday;
	cout << "Укажите часы: ";
	cin >> deadline.tm_hour;
	cout << "Укажите минуты: ";
	cin >> deadline.tm_min;

	cout << "Укажите приоритет: ";
	cin >> priority;
	char* temp = new char[256];
	cout << "Укажите название: ";
	cin >> temp;
	name = temp;
	char* tempp = new char[256];
	cout << "Укажите описание: ";
	cin >> tempp;
	opisanie = tempp;


}
