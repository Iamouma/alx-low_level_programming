#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string to be searched
 * @needle: substring to be located.
 * Return: if located to the beginning of the substring, NULL  if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
