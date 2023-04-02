#include<unistd.h>

int ft_char()
{
	char a;
	a = 'a';
	write(1,&a,1);
}
