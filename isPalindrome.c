#include <stdio.h>
#include <stdbool.h>
#define FALSE (1 == 0)
#define TRUE (1 == 1)

int rev_int(int nb)
{
	int rev;
	int dest;

	while (nb != 0)
	{
		dest = nb % 10;
		rev = rev * 10 + dest;
		nb /= 10;
	}
	return rev;
}

bool isPalindrome(int x)
{
	int r = rev_int(x);
	
	if (x == r)
		return 1;
	else
		return 0;
}

int main() 
{
	if (isPalindrome(10))
		printf("true\n");
	else
		printf("false\n");
}
