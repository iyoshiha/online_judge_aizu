#include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_data
{
	int index;
	int minv;
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

int main()
{
	int n;
	int i;
	int di;
	int *num;
	int swap_num = 0;
	t_data minval;

	di = -1;
	getNumArray(&num, &n);
	while (++di < n - 1)
	{
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
		swap_num++;
		while ((i > di )) // swap all;
		{
			num[i] = num[i - 1];
			i--;
		}
		num[di] = minval.minv;
	}
	trace(num, n);
	printf("%d\n", swap_num);
	return (0);
}
