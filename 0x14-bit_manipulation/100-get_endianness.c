#include "main.h"
/**
 * get_endianness - checks the endianess.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int len;

	len = 1;
	if (*(char *)&len == 1)
		return (1);
	else
		return (0);
}
