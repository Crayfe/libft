/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:31:04 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/20 12:56:38 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	i = 0;
	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	while (aux_s1[i] && aux_s2[i] && i < n)
	{
		if (aux_s1[i] < aux_s2[i])
			return (-1);
		else if (aux_s1[i] > aux_s2[i])
			return (1);
		i++;
	}
	return (0);
}
