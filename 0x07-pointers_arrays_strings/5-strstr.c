#include "main.h"
#include <string.h>



char *_strstr(char *haystack, char *needle)
{
	char *or_haystack = haystack, *or_needle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (or_haystack);
		}
		needle = or_needle;
		or_haystack++;
		haystack = or_haystack;
	}
	return (0);
}
