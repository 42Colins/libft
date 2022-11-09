int	ft_strlen(char *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
		index++;
	return (index + 1);
}

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != c && s[index] != '\0')
		index++;
	if (index != ft_strlen(s))
		return (*s[index]);
	else
		return (NULL);
}
