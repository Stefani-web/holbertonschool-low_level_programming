#include <stdlib.h>
#include <time.h>
#include <stio.h>

/**
 * Main - function
 * Generation a random number for the variable
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int stephy;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	stephy = n % 10;

	if (stephy > 5)
{
	printf("Last digit %d is %d and is greater than 5\n", n, stephy);
}
	else if (stephy == 0)
{
	printf("Last digit %d and is 0\n", n, stephy);
}
	else
{
	printf("Last digit %d and is less than 6 and not 0\n", n, stephy)
}

	return (0);
}

