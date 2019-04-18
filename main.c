#include "includes/cp.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("invalid parameters");
	char *arg1 = argv[1];
	int  arg2 = cp_atoi(argv[2]);
	printf("%d \n", cp_atoi_base(arg1, arg2));
	return (0);
}
