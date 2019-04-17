#includes "../includes/cp.h"

void	cp_putchar(char c);

void	cf_putstr(char *str);
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
