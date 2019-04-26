#ifndef CP_H
# define CP_H
#include <stdlib.h>
#include <stdio.h> 
#include <unistd.h>

#endif

int	cp_atoi(char *str);
void	cp_putchar(char c);
void	print_byte(unsigned char byte);
char	reverse_bits(unsigned char byte);
char	swap_bits(unsigned char byte);
int	is_power(int num);
void	cf_putstr(char *str);
void	cf_last_word(char *str);
int	cf_strlen(char *str);
void	cf_union(char *str1, char *str2);
int	cp_switch(int c);
int	cp_atoi_base(char *str, int base);
void	cs_convert_base(int base_10_num, int base);
