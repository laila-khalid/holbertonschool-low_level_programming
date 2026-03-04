#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int flag = 0;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
			flag = 1;
		}
		else if (flag == 1)
		{
			break;
		}
		i++;
	}

	return (num * sign);
}
