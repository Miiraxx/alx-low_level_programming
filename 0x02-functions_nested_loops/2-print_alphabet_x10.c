#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet 10 times.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i, alpha;

	for (i = 0; i <= 9; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
