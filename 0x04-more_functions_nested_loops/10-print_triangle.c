#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #
 * @size: The size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int row, colum, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size ; row++)
		{
			for (colum = size - row ; colum > 1; colum--)
				_putchar(' ');
			for (k = 0 ; k <= row; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
