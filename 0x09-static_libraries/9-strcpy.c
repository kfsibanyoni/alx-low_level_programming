#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including terminating (\0)
 *
 * @dest: buffer
 * @src: string pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0;

	while (src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
