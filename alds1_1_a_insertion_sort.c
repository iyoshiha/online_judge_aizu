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

	for (i = 1; n > i; i++)
	{
		for (j = i - 1, k = 0; j - k >= 0;)
		{
			if (nums[j - k] > nums[i - k])
			{
				nums[j - k] = nums[j - k] ^ nums[i - k];
				nums[i - k] = nums[j - k] ^ nums[i - k];
				nums[j - k] = nums[j - k] ^ nums[i - k];
			}
			k--;
		}
	}
	for (i = 0; n > i; i++)
		printf("%d", *(nums + i));

	return(0);
}