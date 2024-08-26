#include "main.h"


char *_strchr(char *s, char c)
{
	char *isFound = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			isFound = s;
			break;
		}
		++s;
	}
	if (*s == c)
		isFound = s;

	return (isFound);
}
