#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar('0' + i);
	_putchar('\n');
}
