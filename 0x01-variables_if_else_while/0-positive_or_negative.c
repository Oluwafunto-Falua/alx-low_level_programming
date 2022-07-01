#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main- print a text according to numbers
* Return away (success)
* betty style doc for functions may goes there
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
	printf("%d is %s\n", n, "zero");
	}
	return (0);
