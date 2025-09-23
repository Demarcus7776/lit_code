#include <stdio.h>
#include <stdlib.h>

int*   Sum(int* arr, int size, int target, int* resize)
{
	int	i;
	int	j;
	int	*res = malloc (2 * sizeof(int));

	*resize = 2;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] + arr[j] == target)
			{
				res[0] = i;
				res[1] = j;
				return res;	
			}
			j++;
		}
		i++;
	}
	return NULL;
}

int main ()
{
	int arr[] = {3,2,4};
	int target = 6;
	int resize;
	
	int *result = Sum(arr,4,target,&resize);
	
	if (result != NULL)
	{
		printf("[%d,%d]\n", result[0], result[1]);
		free(result);
	}
}
