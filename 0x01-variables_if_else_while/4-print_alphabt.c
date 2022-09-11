#include <stdio.h>

/**
 * main - print all the letters except q and e.
 *
 * Return: (0)
 */

int main(void)

{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
		}
		putchar(alpha);
	}
	putchar('\n');

	return (0);

}
