/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:29:20 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/24 19:51:11 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	aux_count_words(char const *s, char c)
{
	int		i;
	int		count;
	char	prev;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0 && s[0] != c)
			++count;
		else
			if (s[i] != c && s[i - 1] == c)
				++count;
		i++;
	}
	return (count);
}

char	*aux_get_word(char const *s, char c, int *pos)
{
	char	*word;
	int		len;
	int		jump;

	len = 0;
	while (s[*pos] == c)
		*pos++;
	while (s[*pos + len] && s[*pos + len] != c)
		len++;
	if (len <= 0)
		return (0);
	word = malloc(len + 1);
	if (!word)
		return (0);
	jump = len;
	word[len] = '\0';
	while (--len)
		word[len] = s[pos + len];
	*pos = *pos + jump;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;
	int		pos;
	int		i;

	words = aux_count_words(s, c);
	split = (char **)malloc(words + 1);
	if (!split)
		return (0);
	split[words + 1] = '\0';
	i = 0;
	pos = 0;
	while (i < words)
	{
		split[i] = aux_get_word(s, c, &pos);
		if (!split[i])
		{
			while (--i)
				free(split[i]);
			free(split);
			return (0);
		}
		i++;
	}
	return (split);
}
