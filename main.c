#include <unistd.h>

void	ft_putstr(char	*str);
void	ft_putchar(char	c);

int	main()
{
	ft_putstr("Je vais bien !\n");
	return 0;
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
