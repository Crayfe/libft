/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:29:20 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/26 13:37:32 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	aux_count_words(char const *s, char c)
{
	int		i;
	int		count;

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

static char	*aux_get_word(char const *s, char c, int *pos)
{
	char	*word;
	int		len;
	int		jump;

	len = 0;
	while (s[*pos] == c)
		*pos = *pos + 1;
	while (s[*pos + len] && s[*pos + len] != c)
		len++;
	if (len <= 0)
		return (0);
	word = (char *)malloc(sizeof(char) * len + 1);
	if (!word)
		return (0);
	jump = len;
	word[len] = '\0';
	while (--len + 1)
		word[len] = (char)s[*pos + len];
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
	split = (char **)malloc((words + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	pos = 0;
	while (i < words)
	{
		split[i] = aux_get_word(s, c, &pos);
		//printf("%i: %s\n", i, aux_get_word(s, c, &pos));
		if (!split[i])
		{
			while (i--)
				free((void *)split[i]);
			free(split);
			return (0);
		}
		i++;
	}
	split[i] = 0;
	return (split);
}
/*
#include <stdio.h>

int	main ()
{
	//printf("Words: %i\n", aux_count_words("  lorem     ipsum dolor   sit, a met", ' '));
	//printf("Words: %li\n", sizeof(char));
	char **words;
	words = ft_split("  lorem     ipsum dolor   sit, a met", ' ');
	printf("Word[0] = %s\n", words[0]);
	printf("Word[1] = %s\n", words[1]);
	printf("Word[2] = %s\n", words[2]);
	free(words);
	return (0);

}
*/
