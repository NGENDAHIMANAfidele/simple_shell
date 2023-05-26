#include "shell.h"
<<<<<<< HEAD
/**
 * is_chain - test if current  chain delimeter
 * @info: the parameter struct
 * @buf: the char buffer
 * @p: address of current position in buf
 * Return: 1 if chain delimeter, 0 otherwise
 */

int is_chain(info_t *info, char *buf, size_t *p)
{
	size_t j;

	j = *p;
=======

/**
 * is_chain - test if current char in buffer is a chain delimeter
 * @info: the parameter struct
 * @buf: the char buffer
 * @p: address of current position in buf
 *
 * Return: 1 if chain delimeter, 0 otherwise
 */
int is_chain(info_t *info, char *buf, size_t *p)
{
	size_t j = *p;

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
	if (buf[j] == '|' && buf[j + 1] == '|')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = CMD_OR;
	}
	else if (buf[j] == '&' && buf[j + 1] == '&')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = CMD_AND;
	}
<<<<<<< HEAD
	else if (buf[j] == ';')
	{
		buf[j] = 0;
=======
	else if (buf[j] == ';') /* found end of this command */
	{
		buf[j] = 0; /* replace semicolon with null */
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
		info->cmd_buf_type = CMD_CHAIN;
	}
	else
		return (0);
	*p = j;
	return (1);
}
<<<<<<< HEAD
/**
 * check_chain - checks we should continue chaining based
=======

/**
 * check_chain - checks we should continue chaining based on last status
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
 * @info: the parameter struct
 * @buf: the char buffer
 * @p: address of current position in buf
 * @i: starting position in buf
<<<<<<< HEAD
 * @len: length of bu
 * Return: Void
 */

void check_chain(info_t *info, char *buf, size_t *p, size_t i, size_t len)
{
	size_t j;

	j = *p;
=======
 * @len: length of buf
 *
 * Return: Void
 */
void check_chain(info_t *info, char *buf, size_t *p, size_t i, size_t len)
{
	size_t j = *p;

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
	if (info->cmd_buf_type == CMD_AND)
	{
		if (info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	if (info->cmd_buf_type == CMD_OR)
	{
		if (!info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
<<<<<<< HEAD
	*p = j;
}
/**
 * replace_alias - replaces an aliases in the tokenized string
 * @info: the parameter struct
 * Return: 1 if replaced, 0 otherwise
 */


=======

	*p = j;
}

/**
 * replace_alias - replaces an aliases in the tokenized string
 * @info: the parameter struct
 *
 * Return: 1 if replaced, 0 otherwise
 */
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
int replace_alias(info_t *info)
{
	int i;
	list_t *node;
	char *p;

	for (i = 0; i < 10; i++)
	{
		node = node_starts_with(info->alias, info->argv[0], '=');
		if (!node)
			return (0);
		free(info->argv[0]);
		p = _strchr(node->str, '=');
		if (!p)
			return (0);
		p = _strdup(p + 1);
		if (!p)
			return (0);
		info->argv[0] = p;
	}
	return (1);
}
<<<<<<< HEAD
/**
 * replace_vars - replaces vars in the tokenized string
 * @info: the parameter struct
 * Return: 1 if replaced, 0 otherwise
 */

int replace_vars(info_t *info)
{
	int i;
	list_t *node;

	i = 0;

=======

/**
 * replace_vars - replaces vars in the tokenized string
 * @info: the parameter struct
 *
 * Return: 1 if replaced, 0 otherwise
 */
int replace_vars(info_t *info)
{
	int i = 0;
	list_t *node;

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
	for (i = 0; info->argv[i]; i++)
	{
		if (info->argv[i][0] != '$' || !info->argv[i][1])
			continue;
<<<<<<< HEAD
=======

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
		if (!_strcmp(info->argv[i], "$?"))
		{
			replace_string(&(info->argv[i]),
					_strdup(convert_number(info->status, 10, 0)));
			continue;
		}
		if (!_strcmp(info->argv[i], "$$"))
		{
			replace_string(&(info->argv[i]),
					_strdup(convert_number(getpid(), 10, 0)));
			continue;
		}
		node = node_starts_with(info->env, &info->argv[i][1], '=');
		if (node)
		{
			replace_string(&(info->argv[i]),
<<<<<<< HEAD
						_strdup(_strchr(node->str, '=') + 1));
			continue;
		}
		replace_string(&info->argv[i], _strdup(""));
	}
	return (0);
}
=======
					_strdup(_strchr(node->str, '=') + 1));
			continue;
		}
		replace_string(&info->argv[i], _strdup(""));

	}
	return (0);
}

>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
/**
 * replace_string - replaces string
 * @old: address of old string
 * @new: new string
<<<<<<< HEAD
 * Return: 1 if replaced, 0 otherwise
 */

=======
 *
 * Return: 1 if replaced, 0 otherwise
 */
>>>>>>> 5a066a8bd9021df4a5227b56f8f82aafa8d31b07
int replace_string(char **old, char *new)
{
	free(*old);
	*old = new;
	return (1);
}
