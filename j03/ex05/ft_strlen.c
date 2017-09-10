#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	if (str)
		{
		while (str[i])
			i++;
		}
	return (i);
}

int	main(void)
{
	ft_putnbr(ft_strlen(NULL));
	return (0);
}
