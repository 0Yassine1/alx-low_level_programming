#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
    while (*str)
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

