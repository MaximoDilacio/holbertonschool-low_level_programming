#include "main.h"
/**
 * more_numbers - function print numbers ten times
*/
void more_numbers(void)
{
	int f, n;

	for (f = 0; f < 10; f++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
