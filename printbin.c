#include "main.h"
/**
 * printbin - prints a binary
 * @format: format to print binary
 * @pa: list that contains the binary
 * Return:  number.
 */

int printbin(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int copia;
	char *rem;
	int i, i2, contame = 0;

	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (copia = num; copia != 0; i2++)
	{
		copia = copia / 8;
	}
	rem = malloc(i2);
	while (num != 0)
	{
		rem[i] = num % 2;
		num /= 2;
		i++;
	}
	for (i2 = i - 1; i2 >= 0; i2--)
		_putchar(rem[i]);
	free(rem);
	return (contame);
}
