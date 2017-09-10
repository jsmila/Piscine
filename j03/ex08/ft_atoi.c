#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		while (str[i] <= 32)
			i++;
		if (str[i] == '-')
			{
			signe = -1;
			i++;
			}
		else
			signe = 1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += str[i] - '0';
			i++;	
		}
		return (result * signe);	
	}
	return (0);
}

int	main(void)
{	
	printf("%d\n", ft_atoi("-123456789"));
	return (0);
}
