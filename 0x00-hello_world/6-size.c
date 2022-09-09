#include <stdio.h>

/***
* main - Prints C types
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int longintType;
	long long int longlongintType;
	float c;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(c));
	return (0);
}
