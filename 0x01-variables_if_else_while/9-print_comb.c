#include <stdio.h>

/**
* main - entry point for the C code
*
* Description: prints the "program.."
*
* Return: always success
*/

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
