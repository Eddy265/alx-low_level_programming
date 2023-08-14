#include <stdio.h>
/**
 * main - This is my main function
 *
 * Return: returns 0 if successful
 */

int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
		putchar(y + '0');
	putchar('\n');
	return (0);
}
