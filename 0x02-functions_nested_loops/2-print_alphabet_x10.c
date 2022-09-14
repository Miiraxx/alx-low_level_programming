#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase.
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
