#include <stdlib.h>
#include "main.h"

/**
  to the copied string (Success), NULL (Error)
 */
* *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer	return (NULL);

	while (str[len])
		len++;

	dup char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
	= malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
