/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:33:01 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 19:44:41 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, int count)
{
	int	idx;

	if (dest == src || !count)
		return (dest);
	idx = 0;
	if (dest < src)
	{
		while (idx < count)
		{
			*((char *)dest + idx) = *((char *)src + idx);
			idx++;
		}
	}
	else
	{
		while (count > 0)
		{
			*((char *)dest + count - 1) = *((char *)src + count - 1);
			count--;
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