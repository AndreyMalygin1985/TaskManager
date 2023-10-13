#include<iostream>
#include<Windows.h>
#include<ctime>
#include<chrono>
#include"Task.h"
#include"TaskCollection.h"
#include"Menu.h"
#include"Config.h"

using namespace std;

int main()
{
	Menu menu{};
	TaskCollection tasks{};
	Config config{};
	config.init(menu);


	while (menu.show())
	{
		switch (menu.lastChoise)
		{
		case 1:
			tasks.show();
			break;
		case 2:
			tasks.add();
			break;
		case 3:


		default:
			break;
		}
	}

	return 0;
}