#include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef int t_bool ;

int bubbleSort(int *num, int n)
{
	int i,j,k, swap_num;
	t_bool flag = 1;

	k = 0;
	swap_num = 0;
	while (flag)
	{
		i = n - 1;
		j = i - 1;
		flag = 0;
		while (k <= j)
		{
			if (num[j] > num[i])
			{
				num[j] = num[j] ^ num[i];
				num[i] = num[j] ^ num[i];
				num[j] = num[j] ^ num[i];
				swap_num++;
				flag = 1;
			}
			i--;
			j--;
		}
		k++;
	}
	return swap_num;
}
