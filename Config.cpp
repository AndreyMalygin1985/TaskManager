#include "Config.h"
#include <Windows.h>
#include"menu.h"

void Config::init(Menu &menu)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	menu.add(1, "�������� ������ �����");
	menu.add(2, "�������� ������");
	menu.add(3, "������������� ������");
}
