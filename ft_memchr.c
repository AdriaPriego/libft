/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:00:20 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 15:55:05 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	s = (char *) str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
 
int main()
{
	char cadena[] = "Erase una vez...";
	char *puntero; 
 
	puntero = (char *)memchr( cadena, 0, 5 );
	printf( "%s\n", cadena); 
	printf( "%s\n", puntero ); 

	char cadena1[] = "Erase una vez...";
	char *puntero1; 

	puntero1 = (char *)ft_memchr( cadena1, 0, 5 );
	printf( "%s\n", cadena1); 
	printf( "%s\n", puntero1); 
   return 0;
}*/