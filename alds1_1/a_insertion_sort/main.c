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



int	main(void)
{
	int n, i = 0, j, k;
	int	*nums;

	scanf("%d", &n);
	nums = (int *)malloc(sizeof(int) * n);
	while (n > i)
	{
		scanf("%d", nums + i);
		i++;
	}

	trace(nums, n);
	for (i = 1; n > i; i++)
	{
		for (j = i - 1, k = 0; (j + k) >= 0;)
		{
			if (!(nums[j + k] > nums[i + k]))
				break;
			nums[j + k] = nums[j + k] ^ nums[i + k];
			nums[i + k] = nums[j + k] ^ nums[i + k];
			nums[j + k] = nums[j + k] ^ nums[i + k];
			k--;
		}
		trace(nums, n);
	}
	return(0);
}
