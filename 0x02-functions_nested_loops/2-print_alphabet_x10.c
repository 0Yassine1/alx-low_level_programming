#include "main.h"


void print_alphabet_x10(void)
{
	int i;
	int times = 1;

	while (times <= 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		times++;
	}
}
