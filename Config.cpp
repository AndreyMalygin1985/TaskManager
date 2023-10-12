#include "Config.h"
#include <Windows.h>
#include"menu.h"

void Config::init(Menu &menu)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	menu.add(1, "Показать список задач");
	menu.add(2, "Добавить задачу");
	menu.add(3, "Редактировать задачу");
}
