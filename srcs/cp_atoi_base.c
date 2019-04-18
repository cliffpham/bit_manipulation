#include "../includes/cp.h"

int cp_pow(int x, int n)
{
    int i;
    int num;

    i = 0;
    num = 1;
    while (i < n)
    {
        num *= x;
        i++;
    }
    return (num);
}

int    cp_atoi_base(char *str, int base)
{
    int num_len;
    int is_neg;    
    int cur;
    int exponent;
    int pow_of;
    int result;

    num_len = cf_strlen(str) - 1;
    is_neg = 0;
    exponent = 0;
    result = 0;
    while (num_len >= 0)
    {
        if (str[num_len] == '-')
        {
          is_neg = 1;
          break;
        }
        cur = cp_switch(str[num_len]);
        pow_of = cp_pow(base, exponent);
        result += cur * pow_of;
        num_len--;
        exponent++;
    }
    if (is_neg)
        result *= -1;
    return (result);
}
	
