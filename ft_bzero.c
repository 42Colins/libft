#include <string.h>

int	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i <= n)
	{
		s[i] = '0';
		i++;
	}
	s[i] = '\0';
	return (*s);
}
