#include "main.h"


char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	while (n--)
		*pdest++ = *src++;

	return (dest);
}
