#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n ;
	n = 0;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if ((n % 10 )> 5)
	{
		printf ("Last digit of %d and is greater than 5\n",n,n % 10 );
	}

	else if ((n % 10 ) < 6 0 && (n % 10) !n == 0)
	{
		printf ("Last digit of %d and is less than 6 and not 0\n",n ,n % 10);
		
	}
	else 
	{
		printf("Last digit of %d and is 0\n",n );
	}
	
	return (0);
}