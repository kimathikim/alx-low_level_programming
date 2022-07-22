#include "main.h"
/**
 * *_strchr - locates a character in a string
 *
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to the first occurence of c in str s or NUll if not
 */
char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == 0)
		{
			return (0);
		}
		s++;
	}
}
