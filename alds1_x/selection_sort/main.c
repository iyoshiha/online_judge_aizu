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

int selectionSort(int *num, int n)
{
	int i, leftmost = -1, swap_num = 0;
	struct data
	{
		int index;
		int minv;
	}minval;

	while (++leftmost < n - 1)
	{
		i = leftmost;
		minval.minv = num[leftmost];
		while (n > i)
		{
			if (minval.minv > num[i])
			{
				minval.minv = num[i];
				minval.index = i;
			}
			i++;
		}
		if (minval.minv == num[leftmost])
			continue;
		i = minval.index;
		num[minval.index] = num[leftmost]; num[leftmost] = minval.minv;
		swap_num++;
	}
	return (swap_num);
}

int main()
{
	int n;
	int *num;
	int swap_num;
	t_data minval;

	getNumArray(&num, &n);
	swap_num = selectionSort(num, n);
	trace(num, n);
	printf("%d\n", swap_num);
	return (0);
}
