/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:28:25 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/24 12:23:29 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	aux_contains(char const *set, char c)
{
	int	i;
	i = 0;
	while (set[i])
	{
		if ( set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	new_len;
	char	*trim;

	new_len = 0;
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!aux_contains(set, s1[i]))
			++new_len;
		i++;
	}
	trim = (char *)malloc(new_len + 1);
	if (!trim)
		return (0);
	i = 0;
	while (i < new_len)
	{
		if (aux_contains(set, s[j]))
			++j;
		else
		{
			trim[i] = s[j];
			i++;
		}
	}
	trim[i] = '\0';
	return (trim);
}
