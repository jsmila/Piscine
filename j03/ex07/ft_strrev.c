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

char *ft_strrev(char *str)
{
	int i;
	int j;
	char a;
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (j < i)
	{
		a = str[i];
		str[i] = str[j];
		str[j] = a;
		j++;
		i--;
	}
	return (str);
}

int	main(void)
{
	char str[] = "etib";
	ft_putstr(ft_strrev(str));
	ft_putchar('\n');
	return (0);
}
