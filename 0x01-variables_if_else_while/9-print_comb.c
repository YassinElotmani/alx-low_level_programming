#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
