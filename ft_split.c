/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 00:08:37 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/19 02:00:02 by cprojean         ###   ########.fr       */
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
		if (str[index] == c)
			count++;
		index++;
	}
	return (count + 2);
}

int	find_char(char *str, char c, int index)
{
	if (str[index] == c)
		index++;
	while (str[index] && str[index] != c)
		index++;
	return (index);
}

void	ft_filler(char *str, char *dst, int flag, int index)
{
	int	runner;

	runner = 0;
	while (flag < index)
	{
		dst[runner] = str[flag];
		flag++;
		runner++;
	}
	dst[runner] = '\0';
}

void	free_all(char **str, int runner)
{
	int	index;

	index = 0;
	while (runner >= index)
	{
		free(str[runner]);
		runner--;
	}
	free(str);
}

char	**ft_split(char *str, char c)
{
	int		runner;
	char	**split;
	int		index;
	int		flag;

	index = 0;
	flag = index;
	runner = 0;
	split = malloc(sizeof(char *) * how_many_words(str, c));
	if (!split)
		return (NULL);
	while (runner <= how_many_words(str, c) - 1)
	{
		flag = index;
		index = find_char(str, c, index);
		split[runner] = malloc(sizeof(char) * index - flag + 1);
		if (!split[runner])
			return (NULL);
		ft_filler(str, split[runner], flag, index);
		runner++;
	}
	return (split);
}

int main()
{
	int i = 0;
	char *src = "salut/cava/super/split/ca/pue";
	char c = '/';
	char **split = ft_split(src, c);
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	} 
}
