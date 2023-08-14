#include <stdio.h>
/**
 * main - This is my main function
 *
 * Return: return 0 if successfull
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	if (a != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

