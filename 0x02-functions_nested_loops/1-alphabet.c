#include <stdio.h>
#include "main.h"

/**
 * main - main block
 * Description: prints alphabet in lower case
 * Return: 0
 */

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		putchar(la);
	}

	putchar('\n');
	return (0);
}
