#include "../includes/cp.h"

void	cp_putchar(char c)
{
	write(1, &c, 1);
}

void	print_byte(unsigned char byte)
{
	int i;
	int cur_bit;

	i = 0;
	while (i < 8)
	{
		cur_bit = !!((byte << i) & 0x80);
		cp_putchar(cur_bit + 48);
		i++;
	}
	cp_putchar('\n');
}

//int	main()
//{
//	int arg_one = 37;
//	print_byte(arg_one);
//	return (0);
//}	
