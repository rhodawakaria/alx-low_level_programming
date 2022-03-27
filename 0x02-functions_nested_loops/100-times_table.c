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
		if (n == 0)
		{
			printf("0 ");
			fprintf(stderr, "[Anything]");
		}

		else
		{
			int i;

			for (i = 0; i <= n; i++)
			{
				int j;

				for (j = 0; j <= n; j++)
				{
					int product = i * j;
					int digits = 3;

					if (j == 0)
					{
						printf("%d, ", product);
					}
					else if (j < n)
					{
						printf("%*d, ", digits, product);
					}
					else
					{
						printf("%*d", digits, product);
					}
				}
				putchar('\n');
			}
		}
	}

}
