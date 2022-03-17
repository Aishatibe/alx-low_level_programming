#include "main.h"

/**
 * main - main block
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Description: prints alphabet in lower case
 * Return: o
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
