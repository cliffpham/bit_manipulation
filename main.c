#include "includes/stack.h"


int	main()
{
  //char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
  char exp[] = "1+2*(3^5-6)^(7+8*9)-10";
  infix_to_postfix(exp);
	//int arg_one;
	//if(argc < 2)
	//	printf("Not enough arguments");
	//arg_one = cp_atoi(argv[1]);
	//print_byte(arg_one);
	//print_byte((11 << 0));
	//print_byte((11 << 1));
	//print_byte((11 << 2));
	//print_byte((11 << 3));
	//print_byte(reverse_bits(arg_one));
	// print_byte(swap_bits(arg_one));
	// print_byte((arg_one >> 4 ) | (arg_one << 4));
	//printf("%d\n", is_power(arg_one));
	return (0);
}
