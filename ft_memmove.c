/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:33:01 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 15:50:08 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (dest == src || !len)
		return (dest);
	i = 0;
	if (dest < src)
	{
		while (i < len)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*((char *)dest + len - 1) = *((char *)src + len - 1);
			len--;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   char dest[10] = "string";
   const char src[100]  = "con\0sec\0\0te\0tur";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   
   char dest1[7] = "string";
   const char src1[100]  = "con\0sec\0\0te\0tur";

   printf("Before memmove dest = %s, src = %s\n", dest1, src1);
   ft_memmove(dest1, src1, 9);
   printf("After memmove dest = %s, src = %s\n", dest1, src1);

   return(0);
}*/