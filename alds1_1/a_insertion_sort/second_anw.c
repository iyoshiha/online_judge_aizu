/*
1 <= N 100
0 <= A <= 1000

e.g of input

6				length of N
5 2 4 6 1 3		given N nums of integers 
*/

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

void insertionSort(int *nums, int n)
{
	int v, j;

	for (int i = 1; n > i; i++)
	{
		v = nums[i];
		for (j = i - 1; j >= 0 && (nums[j] > v);)
		{
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1] = v;
		trace(nums, n);
	}
}

int	main(void)
{
	int n;
	int	*nums;

	if (-1 == getNumArray(&nums, &n))
		return (-1);
	trace(nums, n);
	insertionSort(nums, n);
	return(0);
}
