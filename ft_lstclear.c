/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:08:43 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/09/25 16:20:33 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux_node;
	t_list	*del_node;

	aux_node = lst[0];
	while (aux_node->next)
	{
		del_node = aux_node;
		aux_node = aux_node->next;
		ft_lstdelone(del_node, del);
	}
	free(lst);
}
