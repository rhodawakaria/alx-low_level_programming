#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: input
 * Return: Always 0
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				int product = i * j;
				int width = n * n;
				int digits = width > 0 && width < 10?1: width > 10 && width < 100?2:3;

				printf("%*d, ", digits, product);
			}
			putchar('\n');
		}
	}

}
