#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	ft_putchar(*str++);
}

int	main(void)
{
	ft_putstr("Krystalz suce pour un SKS ou un Kar98");
	ft_putchar('\n');
	return (0);
}
