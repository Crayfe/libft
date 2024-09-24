/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:19:17 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/24 19:39:51 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		str_len;

	str_len = ft_strlen(s);
	str = (char *)malloc(str_len + 1);
	if (!str)
		return (0);
	str = ft_strncpy(str, s, str_len + 1);
	return (str);
}
