#include "shell.h"
<<<<<<< HEAD
=======

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
/**
 * _strcpy - copies a string
 * @dest: the destination
 * @src: the source
<<<<<<< HEAD
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (dest  == src || src ==  0)
=======
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
<<<<<<< HEAD
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: pointer to the duplicated string
 */

char *_strdup(const char *str)
{
	int length;
	char *ret;

	length = 0;
=======

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}
<<<<<<< HEAD
/**
 * _puts - prints an input string
 * @str: the string to be printed
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
=======

/**
 * _puts - prints an input string
 * @str: the string to be printed
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
<<<<<<< HEAD
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

=======

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
