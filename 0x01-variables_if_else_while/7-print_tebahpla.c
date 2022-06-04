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
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}
