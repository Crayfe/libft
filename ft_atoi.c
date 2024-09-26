/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:41:40 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/20 14:39:21 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int aux_is_space(char c)
{
if (c == ' ' || c == '\n' || c = '\f' || c = '\v' || c = '\r')
return (1);
return (0);
}
int	aux_clear_spaces(const char *s)
{
int i;

i = 0;
while (aux_is_space(s[i]))
++i;
return (i);
}
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	numb;

	sign = 1;
	numb = 0;
i = aux_clear_spaces();
	if (nptr[0] == '-' || nptr[0] == '+')
	{
		if (nptr[0] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		numb = 10 * numb + (nptr[i] - '0');
		i++;
	}
	return (numb * sign);
}
