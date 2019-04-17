#include "../includes/cp.h"

void	cf_last_word(char *str)
{
	int len;
	int i;
	int first_letter;
	int last_letter;
	int temp;

	len = cf_strlen(str);
	i = len;

	while (str[i] < 'a' || str[i] > 'z')
		i--;
	
	temp = i;
	last_letter = temp;
	
	while (str[i] >= 'a' && str[i] <= 'z')
		i--;

	first_letter = i + 1;

	while (first_letter <= last_letter)
	{
		cp_putchar(str[first_letter]);
		first_letter++;
	}
	cp_putchar('\n');
}
