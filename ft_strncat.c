char	*ft_strncat(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	index;
	int	counts1;
	int	counts2;

	index = 0;
	i = 0;
	while (s1[i])
		i++;
	counts1 = i;
	i = 0;
	while (s2[i] != '\0')
		i++;
	counts2 = i;
	i = 0;
	while (s1[i] != '\0')
		i++;
	if (counts1 < (counts2 = i + n))
		return (*s1);
	while (i < counts2)
	{
		s1[i] = s2[index];
		i++;
		index++;
	}
	return (*s1);
}
