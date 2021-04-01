int insertion_sort(int *nums, int n)
{
	int i, j, k;

	for (i = 0; n > i; i++)
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
	}
	return (0);
}
