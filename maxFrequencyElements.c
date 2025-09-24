#include <stdio.h>
#include <stdlib.h>

int	MFE(int* nums, int numsSize)
{
	int	i;
	int	j;
	int	*res = malloc (2 * sizeof(int));

	i = 0;
	while (i < numsSize)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] == nums[j])
			{
				res[0] = nums[i];
				res[1] = nums[i];
			}
			j++;
		}
		i++;
	}
	return *res;
}

int main()
{
	int arr[] = {3,2,2,1,1};
	//[2,2]

	printf("[%d,%d]", MFE(arr,5));
}
