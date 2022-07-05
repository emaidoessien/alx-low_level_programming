#include "main.h"
/**
*main - function that print lowercase alphabet followed by new line
*Return: no return
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
