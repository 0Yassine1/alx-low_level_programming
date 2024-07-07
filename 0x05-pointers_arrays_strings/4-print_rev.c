#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a newline.
 * @s: The string to be reversed and printed.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Calculate the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print characters from the end to the beginning */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	/* Print a newline character */
	_putchar('\n');
}
