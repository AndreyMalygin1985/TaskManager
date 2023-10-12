#include<iostream>
#include<Windows.h>
#include"Task.h"
#include"menu.h"
#include"Config.h"

using namespace std;

int main()
{
	Menu menu{};
	Config config{};
	config.init(menu);

	while (menu.show())
	{

	}

	return 0;
}