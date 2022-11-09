int	ft_isprint(int c)
{
	if (31 < c && c < 128)
		return (1);
	else
		return (0);
}
