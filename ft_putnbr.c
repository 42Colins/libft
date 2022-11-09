#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	int	i;
	int	mod;
	char	dash;

	dash = '-';
	i = 0;
	if (x == -2147483647)
	{
		write(1, "-2147483647", 11);
	}
	else if (x < 0)
	{
		ft_putchar(dash);
		ft_putnbr(x * (-1));
	}
	else if (x >= 10)
	{
		mod = x%10;
		x = x/10;
		ft_putnbr(x);
		ft_putchar(mod);	
	}
	else
		ft_putchar(x);
}
