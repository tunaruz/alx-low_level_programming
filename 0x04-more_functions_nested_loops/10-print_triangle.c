#include "main.h"

/**
 * print_triangle - prints a triangle of squares according parameter
 * @size: the size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)

{
	int x, y, z;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x <= (size - 1); x++)
	{
	for (y = 0; y < (size - 1) - x; y++)
	{
	_putchar(' ');
	}
	for (z = 0; z <= x; z++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}

}
