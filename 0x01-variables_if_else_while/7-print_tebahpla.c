#include <stdio.h>
/**
 * main - This is my main function
 *
 * Return: returns 0 is successfull
 */

int main(void)
{
	char a;

	for (a = 'z'; a  >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
