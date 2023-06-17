#include <stdio.h>
#include <ctype.h>
/**
*main - print 0123456789
*Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
