#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *strConcat;
	unsigned int i, j, size;

	size = 0;
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			size++;
	if (s2 != NULL)
		for (i = 0; s2[i] != '\0'; i++)
			size++;
	strConcat = (char *) malloc(sizeof(char) * (size + 1));
	if (strConcat == NULL)
		return (NULL);
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			strConcat[i] = s1[i];
	if (s1 == NULL)
		i = 0;
	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++)
		{
			strConcat[i] = s2[j];
			i++;
		}
	strConcat[size] = '\0';
	return (strConcat);
}
