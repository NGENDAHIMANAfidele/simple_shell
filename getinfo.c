#include "shell.h"

void clear_info(info_t *info)
{
	info->arg = NULL;
	info->argv = NULL;
	info->path = NULL;
	info->argc = 0;
}


void set_info(info_t *info, char **av)
{
	int i;

	i = 0;
	info->fname = av[0];
	
