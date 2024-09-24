/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:30:29 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/24 19:34:52 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	mapi = (char *)malloc(len + 1);
	if (!mapi)
		return (0);
	while (s[i])
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	return (mapi);
}
