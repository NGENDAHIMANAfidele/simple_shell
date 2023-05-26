#include "shell.h"
<<<<<<< HEAD
=======

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
/**
 * clear_info - initializes info_t struct
 * @info: struct address
 */
<<<<<<< HEAD

=======
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
void clear_info(info_t *info)
{
	info->arg = NULL;
	info->argv = NULL;
	info->path = NULL;
	info->argc = 0;
}
<<<<<<< HEAD
=======

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
/**
 * set_info - initializes info_t struct
 * @info: struct address
 * @av: argument vector
 */
<<<<<<< HEAD

void set_info(info_t *info, char **av)
{
	int i;

	i = 0;
	info->fname = av[0];
	if (info->arg)
	{
		info->argv = strtow(info->arg, "\t");
	if (!info->argv)
		{
	info->argv = malloc(sizeof(char *) * 2);
	if (info->argv)
	{
		info->argv[0] = _strdup(info->arg);
		info->argv[1] = NULL;
	}
=======
void set_info(info_t *info, char **av)
{
	int i = 0;

	info->fname = av[0];
	if (info->arg)
	{
		info->argv = strtow(info->arg, " \t");
		if (!info->argv)
		{
			info->argv = malloc(sizeof(char *) * 2);
			if (info->argv)
			{
				info->argv[0] = _strdup(info->arg);
				info->argv[1] = NULL;
			}
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
		}
		for (i = 0; info->argv && info->argv[i]; i++)
			;
		info->argc = i;

		replace_alias(info);
		replace_vars(info);
	}
}
<<<<<<< HEAD
=======

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
/**
 * free_info - frees info_t struct fields
 * @info: struct address
 * @all: true if freeing all fields
 */
<<<<<<< HEAD

=======
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
void free_info(info_t *info, int all)
{
	ffree(info->argv);
	info->argv = NULL;
	info->path = NULL;
	if (all)
	{
		if (!info->cmd_buf)
			free(info->arg);
<<<<<<< HEAD
		if (!info->env)
=======
		if (info->env)
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
			free_list(&(info->env));
		if (info->history)
			free_list(&(info->history));
		if (info->alias)
			free_list(&(info->alias));
		ffree(info->environ);
<<<<<<< HEAD
		info->environ = NULL;
=======
			info->environ = NULL;
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
		bfree((void **)info->cmd_buf);
		if (info->readfd > 2)
			close(info->readfd);
		_putchar(BUF_FLUSH);
	}
}
