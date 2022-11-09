int	ft_atoi(const char *str)
{
	int	i;
	int	value;
	int	index;

	index = 0;
	i = 0;
	while ((str[index] == 43) || (str[index] == 45))
	{
		if (str[index]== 45)
			i++;
		index++;
	}
	while(48 <= str[index] && str[index] <= 57)
	{
		value = str[index];
		value *= 10;
		index++;
	}
	value /= 10;
	if ((i % 2) != 0)
		value *= -1;
	return (value);
}
