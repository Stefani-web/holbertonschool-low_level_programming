#include <stdlib.h>
#include <time.h>

/**
 * Generating a random number for the variable
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
		printf("%d and is greater than 5", stephy);
	else if (stephy == 0)
		printf("%d and is 0", stephy)
	else
		printf("%d and is less than 6 and not 0", stephy)

	return (0);
}

