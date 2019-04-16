#include "../includes/cp.h"

int	cp_atoi(char *str)
{
	int i = 0;
	int is_neg = 0;
	int result = 0;  
	int cur;

	while (str[i] >= 0 && str[i] <= 32)
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		cur = str[i] - '0';
		result = result * 10;
		result = result + cur;
		i++;
	}
	if (is_neg == 1)
		result *= -1;
	return (result);
}

//int	main()
//{
//	char *test = "  -34 56";
//	printf("%d", cp_atoi(test));
//	printf("\n");
//	return (0);
//}
