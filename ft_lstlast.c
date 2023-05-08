/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 23:19:49 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/08 13:40:32 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (!lst)
		return (0);
	if (!(lst->next))
		return (lst);
	node = lst;
	while (node)
	{
		if (!(node->next))
			return (node);
		node = node->next;
	}
	return (node);
}
