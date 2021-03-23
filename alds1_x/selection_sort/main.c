#include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_data
{
	int index;
<<<<<<< HEAD
	int minv;
=======
	int minVal;
>>>>>>> 5a9fac055151685a93c9f4a6c81072e35b6f79d2
} t_data;

void trace(int *nums, int n)
{
	for (int p = 0; n > p; p++)
	{
		printf("%d", nums[p]);
		if (p != n - 1) printf(" ");
	}
	printf("\n");
}

int getNumArray(int **nums, int *n)
{
	int i = 0;

	scanf("%d", n);
	if (!(*nums = (int *)malloc(sizeof(int) * *n)))
		return (-1);
	while (*n > i)
	{
		scanf("%d", *nums + i);
		i++;
	}
	return (1);
}

/*
   int linerSearch(int num, int n, const int doneindex, int *minv)
{
	int i;

	*minv = num[doneindex];
	i = doneindex;
	while (n > i + 2)
	{
		if (*minv > num[i + 1])
			*minv = num[i + 1];
	}
	return (doneindex + 1);
}
*/
int main()
{
	int n;
	int *num;
	int minv;
	int i;
	int di;
<<<<<<< HEAD
	t_data minval;

=======

	i = 0;
>>>>>>> 5a9fac055151685a93c9f4a6c81072e35b6f79d2
	di = -1;
	getNumArray(&num, &n);

	while (++di < n - 1)
	{
<<<<<<< HEAD
		i = di;
		minval.minv = num[di];
		while (n > i)
		{
			if (minval.minv > num[i])
			{
				minval.minv = num[i];
				minval.index = i;
			}
			i++;
		}
		if (minval.minv == num[di])
			continue;
		i = minval.index;
		while ((i > di )) // swap all;
		{
			num[i] = num[i - 1];
			i--;

		}
		num[di] = minval.minv;
=======
		minv = num[di];
		while (n - 1 > i)
		{
			if (minv > num[i + 1])
				minv = num[i + 1];
			i++;
		}
		if (minv == num[di])
			continue;
		i = di;
		while (i < n - 1) // swap all;
		{
			num[i] = ^ num[i];
			num[i + 1] = num[i + 1] ^ num[i];
			num[i] = num[i + 1] ^ num[i];
			i++;
		}
		num[i] = minv;
>>>>>>> 5a9fac055151685a93c9f4a6c81072e35b6f79d2
	}
	trace(num, n);
	return (0);
}
