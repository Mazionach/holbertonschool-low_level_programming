#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - generates password
 * Return: success
 */
int main(void)
{
	char pass[21];
	int i;
	time_t t;

	srand((unsigned) time(&t));

	for (i = 0; i < 20; i++)
		pass[i] = (char)rand();

	for (i = 0; i < 20; i++)
		if (pass[i] == '\0')
			pass[i] = 32;

	pass[20] = '\0';
	pass = "abcdABCD.,@123456789"
	printf("%s", pass);
	return (0);
}
