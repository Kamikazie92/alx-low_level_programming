#include <stdio.h>
#include <ctype.h>
/**
*main - print lowercase alpha a-z but remove 'q' and 'e'
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
