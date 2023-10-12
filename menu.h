#pragma once
#include"option.h"

struct Menu {
	Option* options{};
	int sizeOptions = 0;
	int lastChoise{};

	bool show();
	void add(int num, const char* name);
};