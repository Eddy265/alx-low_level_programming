#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - my main function
 *
 * return: returns 0 when successful
 */
i
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code starts here */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	return (0);
}
