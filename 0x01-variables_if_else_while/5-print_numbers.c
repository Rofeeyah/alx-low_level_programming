#include <stdio.h>

/**
* main - Entry point for the code C
*
* Description: prints the "program.."
*
* Return: always success
*/

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);

}
