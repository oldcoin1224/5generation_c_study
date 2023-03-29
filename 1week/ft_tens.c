#include<unistd.h>

int ft_tens()
{
	int num;
	num = 48;

	while (num <= '9')
		write(1, &num, 1);
	return 0;
}
