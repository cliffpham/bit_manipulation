#include "../includes/cp.h"

void	cf_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		cp_putchar(str[i]);
		i++;
	}
	cp_putchar('\n');
}
