#include<deepcopy.h>


char* DeepCopy::DeepCopy(const char* text)
{
	if (text = nullptr) { return nulptr; }
	char* newtext = new char[strlen(text) + 1];
	strcpy_s(newtext, strlen(text) + 1, text);
	return newtext;
}
