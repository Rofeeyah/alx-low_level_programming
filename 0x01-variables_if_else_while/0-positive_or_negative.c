#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
* main - Entry point for the C code
*
* Description: prints "program.."
*
* Return: always 0
*/

int main(void)

{

		int n = 7;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (n > 0)
				{
					printf("n is positive\n");
				}
				else if (n < 0)
				{
					printf("n is negative\n");
				}
				else
				{
					printf("n is zero\n");
				}
				return (0);

}
