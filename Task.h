#pragma once
#include<ctime>

struct Task {
	char name[256];
	int priority;
	char opisanie[256];
	tm dadline;
};