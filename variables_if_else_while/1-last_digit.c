#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Print last digit
 *
 * Return: Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i ", n, n % 10);
	if ((n % 10) > 5)
		printf("and is greater than 5");
	if ((n % 10) == 0)
		printf("and is 0");
	if ((n % 10) < 6 && (n % 10) != 0)
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
