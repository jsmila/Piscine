#include <unistd.h>

void		ft_putchar(char c)
{
	write (1, &c, 1);
}

void 		ft_print_comb2(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 10000)
	{
		b = a / 100;
		c = a % 100;
		a++;
		if	(b < c)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar('0' + b / 10);
			ft_putchar('0' + b % 10);
			ft_putchar(' ');
			ft_putchar('0' + c / 10);
			ft_putchar('0' + c % 10);
		}
	}
}

int		main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}
