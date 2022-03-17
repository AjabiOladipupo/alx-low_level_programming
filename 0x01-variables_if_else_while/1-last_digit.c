#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: returns 0 when everything works fine
*
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
{
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
}

{
		printf("Last digit of %i is %i and is 0\n, n, n % 10);
	else if (last == 0)
}
		printf("Last digit of %d is %d and is 0\n", n, last);
	return (0);
}
