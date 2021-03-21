#include <stdio.h>
# include <stdlib.h>
# include <string.h>

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

int bubbleSort(int *num, int n)
{
	int i,j,k, swap_num;

	k = 0;
	swap_num = 0;
	while (k < (i = n - 1))
	{
		j = i - 1;
		while (k <= j)
		{
			if (num[j] > num[i])
			{
				num[j] = num[j] ^ num[i];
				num[i] = num[j] ^ num[i];
				num[j] = num[j] ^ num[i];
				swap_num++;
			}
			i--;
			j--;
		}
		k++;
	}
	return swap_num;
}

int main(void)
{
	int n;
	int *num;
	int swap_num;

	getNumArray(&num, &n);
	swap_num = bubbleSort(num, n);
	trace(num, n);
	printf("%d\n", swap_num);
	return (0);
}
