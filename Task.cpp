#include "Task.h"
#include <iostream>
#include <ctime>
using namespace std;

void Task::show()
{
	cout << "����: " << deadline.tm_mday << "." << deadline.tm_mon + 1 << "." << deadline.tm_year + 1900 << "." << deadline.tm_hour << ":" << deadline.tm_min << endl;
	cout << "��������: " << priority << endl;
	cout << "��������: " << name << endl;
	cout << "��������: " << opisanie << endl;
}

void Task::fillByUser()
{
	int int_temp = 0;
	cout << "������� ���: ";
	cin >> int_temp;
	deadline.tm_year = int_temp - 1900;
	cout << "������� �����: ";
	cin >> int_temp;
	deadline.tm_mon = int_temp - 1;
	cout << "������� ����: ";
	cin >> deadline.tm_mday;
	cout << "������� ����: ";
	cin >> deadline.tm_hour;
	cout << "������� ������: ";
	cin >> deadline.tm_min;

	cout << "������� ���������: ";
	cin >> priority;
	char* temp = new char[256];
	cout << "������� ��������: ";
	cin >> temp;
	name = temp;
	char* tempp = new char[256];
	cout << "������� ��������: ";
	cin >> tempp;
	opisanie = tempp;


}
