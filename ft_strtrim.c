/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:28:25 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/25 16:07:46 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	aux_contains(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	aux_newlen(char const *s, char const *set, int i)
{
	int	new_len;

	new_len = 0;
	while (s[i])
	{
		if (!aux_contains(set, s[i]))
			++new_len;
		i++;
	}
	return (new_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		new_len;
	char	*trim;

	j = 0;
	new_len = aux_newlen(s1, set, 0);
	trim = (char *)malloc(new_len + 1);
	if (!trim)
		return (0);
	i = 0;
	while (i < new_len)
	{
		if (aux_contains(set, s1[j]))
			++j;
		else
		{
			trim[i] = s1[j];
			i++;
		}
	}
	trim[i] = '\0';
	return (trim);
}
