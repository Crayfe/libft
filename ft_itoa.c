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
	if (n < 0)
	{
		len = 1;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;
	
	len = 1;
	if (n != 0)
		len = aux_getlen(n);
	itoa = (char *)malloc(len + 1);
	if (!itoa)
		return (0);
	itoa[len] = '\0';
	if (n < 0)
	{
		itoa[0] = '-';
		n = -n;
	}
	if (n == 0)
		itoa[0] = '0';
	while (n > 0)
	{
		itoa[--len] = '0' + (n % 10) ;
		n = n / 10;
	}
	return (itoa);
}
