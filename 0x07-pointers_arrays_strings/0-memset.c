/**
 * _memset - fills a memory block with a constant byte
 * @s: addresss to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, charb, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
