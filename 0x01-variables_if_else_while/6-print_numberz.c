#include <stdio.h>

/**
* main- entry point for the C code
*
* Description: prints the "program.."
*
* Return: always success
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);

}
