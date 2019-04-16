int	is_power(int num)
{
	return ((num & (num - 1)) == 0);
}
