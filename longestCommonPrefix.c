#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*longestCommonPrefix(char **strs, int strsSize, char *buffer)
{
	int	i;
	int	j;
	int	len;

	if (strsSize == 0)
		return ("");
	len = ft_strlen(strs[0]);
	i = 1;
	while (i < strsSize)
	{
		j = 0;
		while (j < len && strs[i][j] && strs[0][j] == strs[i][j])
			j++;
		len = j;
		if (len == 0)
			return ("");
		i++;
	}
	j = 0;
	while (j < len)
	{
		buffer[j] = strs[0][j];
		j++;
	}
	buffer[j] = '\0';
	return (buffer);
}

int	main(void)
{
	char	*words[] = {"flower", "flow", "flight"};
	int		size = 3;
	char	buffer[100];
	char	*result;

	result = longestCommonPrefix(words, size, buffer);
	printf("%s\n", result);
	return (0);
}
