#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	result;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 0 && str[i] <= 42 ) || str[i] == ',' ||
		(str[i] >= 46 && str[i] <= 47) || (str[i] >= 58 &&
		str[i] <= 127))
			i++;
		if (str[i] == '-')
			signe = -1;
		else
			signe = 1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += str[i++] - 48;
			
		}
	}
	return (result * signe);
}

int	main(void)
{
	char str[] = "224466881";
	printf("%d\n", ft_atoi(str));
	return (0);
}
