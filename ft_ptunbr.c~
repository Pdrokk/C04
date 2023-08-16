#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n1)
{
	long long	n2;
	
	n2 = n1;
	if (n2 < 0)
	{
		ft_putchar('-');
		n2 = -n2;
	}
	if (n2 > 9)
	{
		ft_putnbr(n2 / 10);
		ft_putnbr(n2 % 10);
	}
	else
		ft_putchar(n2 + '0');
}

int	main(void)
{
	int	number = -2147483648;
	ft_putnbr(number);
	ft_putchar('\n');

	return(0);
}
