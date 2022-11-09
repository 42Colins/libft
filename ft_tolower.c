int	ft_tolower(int c)
{
	if (64 < c && c < 91)
		return (c + 32);
	else
		return (c);
}
