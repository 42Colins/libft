/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 00:08:37 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/23 13:14:55 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	how_many_words(char *str, char c)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (str[index])
	{
		while (str[index] == c
			|| (index == 0 && str[index] != c)
			|| (str[index] == c && str[index + 1] == c
				&& str[index + 1] != '\0'))
		{
			while (str[index] == c)
				index++;
			index++;
			if (str[index - 1] != '\0')
				count++;
		}
		index++;
	}
	return (count);
}

int	find_char(char *str, char c, int index)
{
	while (str[index] == c)
		index++;
	while (str[index] && str[index] != c)
		index++;
	return (index);
}

void	ft_filler(char *str, char *dst, int flag, char c)
{
	int	runner;
	int	index;

	index = find_char(str, c, flag);
	runner = 0;
	while (str[flag] == c)
		flag++;
	while (flag < index)
	{
		dst[runner] = str[flag];
		flag++;
		runner++;
	}
	dst[runner] = '\0';
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
	int		runner;
	char	**split;
	int		index;
	int		flag;
	int		words;

	words = how_many_words(str, c);
	index = 0;
	flag = index;
	runner = 0;
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	while (runner < words)
	{
		flag = index;
		index = find_char(str, c, index);
		split[runner] = malloc(sizeof(char) * index - flag + 1);
		if (!split[runner])
			free_all(split, runner);
		ft_filler(str, split[runner], flag, c);
		runner++;
	}
	split[runner] = NULL;
	return (split);
}

// int main()
// {
// 	int i = 0;
// 	char *src = "////rfhgj/";
// 	char c = '/';
// 	char **split = ft_split(src, c);
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// }
