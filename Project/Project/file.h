#pragma once
#include <fstream>
#include "ticket.h"
#include "venue.h"

class File {
public:
	static char filename[];
	void open();
	void saveData();
	void loadData();
	void close();
};