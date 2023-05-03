/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:11:52 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 15:59:24 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*strsrc;

	str = (char *) dest;
	strsrc = (char *) src;
	i = 0;
	if (!str && !strsrc)
		return (0);
	while (i < n)
	{
		str[i] = strsrc[i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main () 
{
   printf("%s\n", memcpy(((void *)0), ((void *)0), 3));
   printf("%s", ft_memcpy(((void *)0), ((void *)0), 3));
   return(0);
}
*/