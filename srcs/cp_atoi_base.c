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

int    cp_switch(char c)
{
    if (c == '0')
        return (0);
    else if (c == '1')
        return (1);
    else if (c == '2')
        return (2);
    else if (c == '3')
        return (3);
    else if (c == '4')
        return (4);
    else if (c == '5')
        return (5);
    else if (c == '6')
        return (6);
    else if (c == '7')
        return (7);
    else if (c == '8')
        return (8);
    else if (c == '9')
        return (9);
    else if (c == 'A' || c == 'a')
        return (10);
    else if (c == 'B' || c == 'b')
        return (11);
    else if (c == 'C' || c == 'c')
        return (12);
    else if (c == 'D' || c == 'd')
        return (13);
    else if (c == 'E' || c == 'e')
        return (14);
    else if (c == 'F' || c == 'f')
        return (15);
    return (0);
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
	
