#include <stdio.h>
#include <unistd.h>

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}
*/

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	result;

	i = 0;
	result = 0;
	if (str)
	{
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
	}
	return (0);
	}

int	main(void)
{	
	printf("%d\n", ft_atoi("123456"));
	return (0);
}
