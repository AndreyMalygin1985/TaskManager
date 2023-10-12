#include "menu.h"
#include <iostream>
#include "option.h"
using namespace std;

bool Menu::show()
{
	for (size_t i = 0; i < sizeOptions; i++)
	{
		cout << "[ " << options[i].num << " ]" << options[i].name << endl;
	}
	cout << endl;
	cout << "0 - Выход." << endl;

	return true;
}

void Menu::add(int num, const char* name)
{
	Option* temp = new Option[sizeOptions + 1];
	for (size_t i = 0; i < sizeOptions; i++)
	{
		temp[i] = options[i];
	}
	temp[sizeOptions] = Option { name,num };

	delete[] options;
	options = temp;
	sizeOptions++;


}
