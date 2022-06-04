#include <stdio.h>

/**
* main - Entry point for the C code
*
* Description: prints the "program.."
*
* Return: always success
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);

}
