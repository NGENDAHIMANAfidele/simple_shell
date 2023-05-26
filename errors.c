#include "shell.h"
<<<<<<< HEAD
/**
 *_eputs - prints an input string
 * @str: the string to be printed
=======

/**
 *_eputs - prints an input string
 * @str: the string to be printed
 *
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
 * Return: Nothing
 */
void _eputs(char *str)
{
<<<<<<< HEAD
	int i;

	i = 0;
=======
	int i = 0;

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}
<<<<<<< HEAD
=======

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
/**
 * _eputchar - writes the character c to stderr
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
<<<<<<< HEAD

=======
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
<<<<<<< HEAD
=======

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
/**
 * _putfd - writes the character c to given fd
 * @c: The character to print
 * @fd: The filedescriptor to write to
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
<<<<<<< HEAD

=======
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
<<<<<<< HEAD
	return (0);
}
=======
	return (1);
}

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
/**
 *_putsfd - prints an input string
 * @str: the string to be printed
 * @fd: the filedescriptor to write to
 *
 * Return: the number of chars put
 */
<<<<<<< HEAD

int _putsfd(char *str, int fd)
{
	int i;

	i = 0;
=======
int _putsfd(char *str, int fd)
{
	int i = 0;

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
<<<<<<< HEAD

=======
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
