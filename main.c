#include "includes/cp.h"

int	main(int argc, char **argv)
{
	int arg_one;
	if(argc < 2)
		printf("Not enough arguments");
	arg_one = cp_atoi(argv[1]);
	print_byte(arg_one);
	print_byte(reverse_bits(arg_one));
	printf("%d\n", is_power(arg_one));
	return (0);
}
