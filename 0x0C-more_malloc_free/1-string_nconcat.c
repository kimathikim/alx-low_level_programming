#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int x, n1 = 0, n2 = 0, i, j;

	if (s1 != NULL)
	{
		while (s1[n1] != 0)
			n1++;
	}
	else
		s1 = "";
	if (s2 != NULL)
	{
		while (s2[n2] != 0)
			n2++;
	}
	else
		s2 = "";
	if (n < n2)
		x = n;
	else
		x = n2;
	a = malloc(sizeof(char) * (n1 + x + 1));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < x; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = 0;

	return (a);
}
