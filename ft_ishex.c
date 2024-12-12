/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishex.c                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:36:24 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 14:48:31 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ishex(int c)
{
	if ((c >= '0' && c <= '9') 
	|| (c >= 'A' && c <= 'F') 
	|| (c >= 'a' && c <= 'f'))
		return (1);
	return (0);
}