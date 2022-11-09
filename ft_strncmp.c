int ft_strlen(char *str);

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (0);
	}
	return (1);
}
