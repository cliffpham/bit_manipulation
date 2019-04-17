#include "../includes/cp.h"

int 	in_memory(int *memory, char cur)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (memory[i])
	{
		if (memory[i] == cur)
		{
			result = 1;
			break;
		}
		i++;
	}
	return (result);
}

void	cf_union(char *str1, char *str2)
{
	int len1;
	int len2;
	int i;
	int j;
	int k;

	len1 = cf_strlen(str1);
	len2 = cf_strlen(str2);
	int memory[len1 + len2];
	i = 0;
	j = 0;
	k = 0;
	
	while (i < len1)
	{
		if (!in_memory(memory, str1[i]))
		{
			cp_putchar(str1[i]);
			memory[k] = str1[i];
			k++;
		}
		i++;
	}
	
	while (j < len2)
	{
		printf("%c", str2[j]);
		if (!in_memory(memory, str2[j]))
		{
			cp_putchar(str2[j]);
			memory[k] = str2[j];
			k++;
		}
		j++;
	}
	cp_putchar('\n');
}	
