#include<unistd.h>

int alphabet()
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		write(1,&c,1);
		c++;
	}
	return 0;
}
