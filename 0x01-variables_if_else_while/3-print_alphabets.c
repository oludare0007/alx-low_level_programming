#include <stdio.h>

/**
 * main - Print alphabet in lower and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	puchar('\n');
	return (0);
}
