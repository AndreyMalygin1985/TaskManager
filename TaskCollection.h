#pragma once
#include"Task.h"
#include"TaskCollection.h"

struct  TaskCollection {
	Task* Tasks;
	size_t size;

	void show();
	void add();
};