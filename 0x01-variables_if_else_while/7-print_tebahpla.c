#include <stdio.h>
#include <ctype.h>
/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
