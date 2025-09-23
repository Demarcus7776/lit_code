#include <stdio.h>

int maxFrequencyElements(int* nums, int numsSize) 
{
    int i;
    int c = nums[0];

    i = 0;
    while (i < numsSize)
    {
        if (nums[i] > c)
		c = nums[i];

        i++;
    }
	return c;
}

int main ()
{
    int arr[] = {1,2,2,3,6};
    
    printf("%d", maxFrequencyElements(arr,5));
}
