/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:03:53 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/28 16:03:14 by cprojean         ###   ########.fr       */
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
// 	array = malloc(sizeof(char) * (size + 1));
// 	if (!array)
// 		return (NULL);
// 	if (len < size)
// 		return (ft_strdup(""));
// 	while ((size_t)index < size && s[start + index])
// 	{
// 		array[index] = s[start + index];
// 		index++;
// 	}
// 	array[index] = '\0';
// 	return (array);
// }

int	how_many_words(char *str, char c)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (str[index])
	{
		if ((index == 0 && str[index] != c))
			count++;
		if (index != 0 && (str[index - 1] == c && str[index] != c && str[index] != '\0'))
			count++;
		index++;
	}
	return (count);
}

int	find_sep(char *str, char c, int index)
{
	if (index == 0 && str[index] != c)
		return (index);
	while (str[index] == c)
		index++;
	return (index);
}

int	word_size(char *str, char c, int index)
{
	int	pos;

	pos = 0;
	while (str[index] == c)
	{
		index++;
	}
	while (str[index] != c && str[index])
	{
		pos++;
		index++;
	}
	return (pos);
}

void	*free_all(char **str, int runner)
{
	int	index;

	index = 0;
	while (runner >= index)
	{
		free(str[runner]);
		runner--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char *str, char c)
{
	char	**split;
	int		runner;
	int		words;
	int		index;
	int		size;

	runner = 0;
	index = 0;
	words = how_many_words(str, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	while (runner < words)
	{
		index = find_sep(str, c, index);
		size = word_size(str, c, index);
		split[runner] = ft_substr(str, index, size);
		if (!split[runner])
			return (free_all(split, runner));
		index += size;
		runner++;
	}
	split[runner] = NULL;
	return (split);
}

// int main()
// {
//      int i = 0;
//      char *src = "salut a tous";
//      char c = ' ';
//      char **split = ft_split(src, c);
//      while (split[i])
//      {
//         printf("%s\n", split[i]);
//         i++;
//      }
// }
