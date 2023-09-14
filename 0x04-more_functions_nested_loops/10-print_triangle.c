#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: the size of the triangle to be printed.
 */
void print_triangle(int size)
{
	int htg, wth;

	if (size > 0)
	{
		for (htg = 1; htg <= size; htg++)
		{
			for (wth = size - htg; wth > 0; wth--)
				_putchar(' ');

			for (wth = 0; wth < htg; wth++)
				_putchar('#');

			if (htg == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
