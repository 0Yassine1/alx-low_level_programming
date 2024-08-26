#include "main.h"


int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
