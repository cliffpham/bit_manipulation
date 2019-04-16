char	reverse_bits(unsigned char byte)
{
	unsigned char copy = byte;
	int size = sizeof(byte) * 8 - 1;
	while(byte)
	{
		byte >>= 1;
		copy <<= 1;
		copy |= byte & 1;
		size--;
	}
	return copy << size;
}		
