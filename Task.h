#pragma once
#include<ctime>

struct Task {
	const char* name;
	int priority;
	const char* opisanie;
	tm deadline;

	void show();
	void fillByUser();
};