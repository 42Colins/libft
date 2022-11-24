/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:08:31 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/24 14:07:27 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strlen(const char *s)
// {
// 	int	index;

// 	index = 0;
// 	while (s[index] != '\0')
// 		index++;
// 	return (index);
// }

// char	*ft_strdup(const char *s1)
// {
// 	int		size;
// 	int		runner;
// 	char	*dup;

// 	runner = 0;
// 	size = ft_strlen(s1);
// 	dup = malloc(sizeof(char) * size + 1);
// 	if (dup == 0)
// 		return (0);
// 	while (runner < size)
// 	{
// 		dup[runner] = s1[runner];
// 		runner++;
// 	}
// 	dup[runner] = '\0';
// 	return (dup);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	int		index;
// 	size_t	size;
// 	char	*array;

// 	index = 0;
// 	size = ft_strlen(s);
// 	if (start >= size)
// 		return (ft_strdup(""));
// 	size = size - start;
// 	if (size > len)
// 		size = len;
// 	array = malloc(sizeof(char) * (size) + 1);
// 	if (!array)
// 		return (NULL);
// 	if (len < size)
// 		return (ft_strdup(""));
// 	while ((size_t)index < len && s[start + index])
// 	{
// 		array[index] = s[start + index];
// 		index++;
// 	}
// 	array[index] = '\0';
// 	return (array);
// }

int	ft_is_sep(char s1, const char *set)
{
	int	index;
	int	runner;

	runner = 0;
	index = 0;
	while (set[runner])
	{
		if (set[runner] == s1)
			return (1);
		runner++;
	}
	return (0);
}

int	ft_trim_this(const char *s1, const char *set, int index, int size)
{
	if (index == size)
	{
		index -= 1;
		while (s1[index] && ft_is_sep(s1[index], set) == 1)
		{
			index--;
		}
	}
	else
	{
		while (s1[index] && ft_is_sep(s1[index], set) == 1)
		{
			index++;
		}
	}
	return (index);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	index;
	int	size;
	int	count;
	int	second;

	if (!s1 || !set)
		return (NULL);
	size = ft_strlen(s1);
	index = 0;
	count = ft_trim_this(s1, set, index, size);
	second = ft_trim_this(s1, set, size, size);
	size = second - count;
	return (ft_substr(s1, count, size + 1));
}

// int main ()
// {
// 	const char *s1 = "abcabccbasalutcavadefoucbaabca";
// 	const char *set = "abc";
// 	printf("%s", ft_strtrim(s1, set));
// }
