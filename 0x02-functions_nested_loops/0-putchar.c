#include "main.h"
/**
 * main - Prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chi[] = "_putchar";
	int i = 0;

	while (chi[i] != '\0')
	{
		_putchar(chi[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
