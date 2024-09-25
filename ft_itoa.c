/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:52:51 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/25 16:14:03 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	aux_getlen(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		aux_n;
	int		len;

	len = aux_getlen(n);
	if (len <= 0)
		return (0);
	itoa = malloc(len + 1);
	if (!itoa)
		return (0);
	aux_n = n;
	while (len--)
	{
		itoa[len - 1] = aux_n % 10;
		aux_n = aux_n / 10;
	}
	return (itoa);
}
