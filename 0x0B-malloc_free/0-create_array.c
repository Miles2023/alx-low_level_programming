#include "main.h"
#include <stdlib.h>
/**
 * create_array - function
 * Description: a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: specific character
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
