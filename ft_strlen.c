#include <stdio.h>

int	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	main(void)
{
	int	result;
	char	str1[] = "oneyma";

	result = ft_strlen(str1);
	printf("a string tem %d caracteres.", result);
	return (0);

}
