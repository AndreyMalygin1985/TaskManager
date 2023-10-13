#pragma once
#include"Option.h"

struct Menu {
	Option* options{};
	size_t sizeOptions = 0;
	int lastChoise{};

	bool show();
	void add(int num, const char* name);
	void request();
	bool isValid();
};