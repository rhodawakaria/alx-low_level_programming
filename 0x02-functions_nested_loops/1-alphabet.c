#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}

