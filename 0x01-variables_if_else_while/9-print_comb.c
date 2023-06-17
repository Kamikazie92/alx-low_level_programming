#include <stdio.h>
#include <ctype.h>
/**
 *main - print 0-9 separated with commas, using putchar
 *Return: Always 0 (Success)
 */
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
