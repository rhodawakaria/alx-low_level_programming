#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: Where size is the size of the square
 *
 * Return: 0
 */

void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');

			if (height == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

