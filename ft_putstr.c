#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char str1[] = "mais novoo";
	
	ft_putstr(str1);
	return (0);
}
