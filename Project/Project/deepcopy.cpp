#include "deepcopy.h"
#pragma once

char* DeepCpy::DeepCopy(const char* text)
{
	if (text == nullptr)  throw  "Util::deepCopy receives null pointer";
	static char* newtext = new char[strlen(text) + 1];
	strcpy_s(newtext, strlen(text) + 1, text);
	return newtext;
}

