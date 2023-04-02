#include<stdio.h>
#include<unistd.h>

int swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	return 0;
}

int comb(int* bord, int n, int i)
{
	int ii;
	ii = i;
	if(i == n)
	{
		ii = 0;
		while (ii < n)
		{
			printf("%d", *(bord + ii));
			ii++;
		}
		write(1, "\n", 1);
//		printf("\n");
		return 0;
	}
	while(ii < 4)
	{
		swap(bord + i, bord + ii);
		comb(bord, n, i + 1);
		swap(bord + i, bord + ii);
		ii++;
	}
	return 0;
}

int main()
{
	int bord[4] = {1, 2, 3, 4};

	comb(bord, 4, 0);
	return 0;
}
