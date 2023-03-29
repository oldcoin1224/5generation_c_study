#include<unistd.h>

int ft_putnbr(int nbr)
{
	int nbr_d;
	nbr_d = 0;
	if (nbr > -10 && nbr < 10)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		nbr += 48;
		write(1, &nbr, 1);
		return 0;
	}
	nbr_d = (nbr % 10) + 48;
	nbr = nbr / 10;
	ft_putnbr(nbr);
	write(1, &nbr_d, 1);
	return 0;
}

int main()
{
	ft_putnbr(123);
	write(1, "\n", 1);
	ft_putnbr(102);
	write(1, "\n", 1);
	ft_putnbr(100);
	write(1, "\n", 1);
	ft_putnbr(10);
	write(1, "\n", 1);
	ft_putnbr(5);
	write(1, "\n", 1);
	return 0;
}
