#include <stdio,h>

char *ft_strdup(const char *s1)
{
	int	i;
	char	s2;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (s2 = (char) malloc(i * sizeof(char)) == NULL);
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
