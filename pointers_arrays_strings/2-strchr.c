#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character to look for
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}

	return (0);
}
