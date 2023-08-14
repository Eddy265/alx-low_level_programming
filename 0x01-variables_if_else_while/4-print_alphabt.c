#include <stdio.h>
/**
 * main - This is my main function
 *
 * Return: returns 0 if successfull
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar ('\n');
	return (0);
}
