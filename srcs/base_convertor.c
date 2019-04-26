#include "../includes/cp.h"

void    cs_convert_base(int base_10_num, int base)
{
	if (base_10_num == 0)
		return;
	cs_convert_base(base_10_num / base, base);
	printf("%c", cp_switch(base_10_num % base));

	//int copy;
	//while(base_10_num)
	//{
	//	copy = base_10_num;
	//	copy = copy % base;
	//	printf("%c", cp_switch(copy));
	//	base_10_num = base_10_num / base;
	//}
}
