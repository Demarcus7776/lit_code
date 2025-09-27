#include <stdio.h>
#include <stdbool.h>

bool isvalid(char* s)
{
	int i;
	char stack[1000];
	char ind = 0;

	i = 0;
	while (s[i] != 0)
	{
		char c = s[i];

		if (c == '(' || c == '[' || c == '{' )
		{
			stack[ind++] = c;
		}
		else
		{
			if (ind == 0)
			{
				return 0;
			}

		char last = stack[--ind];

		if ((c == ')' && last != '(') ||
				(c == '}' && last != '{') ||
				(c == ']' && last != '['))
			return 0;
		}
			i++;

	}
	return (ind == 0);
}

int main ()
{
    char s1[] = "({[]})";
    char s2[] = "([)]";

    printf("%d\n", isvalid(s1));
    printf("%d\n", isvalid(s2)); 

}
