#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program.
 * Return: 0 Success
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, c1, c2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\n';

	if (sum != 2772)
	{
		c1 = (sum - 2772) / 2;
		c2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			c1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + c1))
			{
				password[index] -= c1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + c2))
			{
				password[index] -= c2;
				break;
			}
		}
	}

	printf("%s", password);
	return (0);
}
