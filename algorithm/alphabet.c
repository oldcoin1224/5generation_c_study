#include<unistd.h>

int main()
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		write(1,&c,1);
		c++;
	}
	return 1;
}
