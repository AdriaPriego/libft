/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 23:55:55 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/05 23:55:55 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*def;
	t_list	*aux;

	aux = lst;
	if (!(def = malloc(sizeof(t_list))))
		return (0);
	while (aux)
	{
		def->content = f(aux->content);
		if (!(def->next = malloc(sizeof(t_list))))
			ft_lstclear(&aux, del);
		aux = aux->next;
		def = def->next;
	}
	return (def);
}
