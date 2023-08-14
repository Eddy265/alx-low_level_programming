#include <stdio.h>
/**
 * main - This is my main function
 *
 * Return: return 0 if successfull success
 */

int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
