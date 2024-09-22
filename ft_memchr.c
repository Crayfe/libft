/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:17:01 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/20 12:53:56 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux_s;

	i = 0;
	aux_s = (unsigned char *)s;
	while (aux_s[i] && i < n)
	{
		if (aux_s[i] == c)
			return ((void *)aux_s + i);
		i++;
	}
	return (0);
}
