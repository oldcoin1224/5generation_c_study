#include<unistd.h>
#include<stdio.h>

int select(int bord[], int d, int i);
int check(int bord[], int d, int i);

int main()
{
	int bord[11];
	int i = 0;

	while (i < 11)
	{
		bord[i] = 0;
		i++;
	}
	select(bord, 0, 0);
	printf("%d\n", bord[10]);
	return 0;
}

int select(int bord[], int d, int i)
{
	if (d == 10)
	{
		while (i < d)
		{
			write(1, &bord[i], 1);
			i++;
		}
		write(1, "\n", 1);
		bord[10]++;
		return 0;
	}
	while (i < 10)
	{
		if (check(bord, d, i))
		{
			bord[d] = '0' + i;
			select(bord, d + 1, 0);
		}
		i++;
	}
	return 0;
}

int check(int bord[], int d, int i)
{
	int j;

	j = 0;
	while ((bord[j] != i + '0') && (j < d))
		j++;
	if (j != d)
		return 0;
	j--;
	while ((bord[j] + (d - j) != i + '0') && (bord[j] + (j - d) != i + '0') && (j >= 0))
		j--;
	if (j != -1)
		return 0;
	return 1;
}

