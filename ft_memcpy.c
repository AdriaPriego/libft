/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:11:52 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 17:22:44 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int count)
{
	int		i;
	char	*str;
	char	*strsrc;

	str = (char *) dest;
	strsrc = (char *) src;
	i = 0;
	while (i < count)
	{
		str[i] = strsrc[i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50] = "Hel!!";

   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   const char src1[50] = "http://www.tutorialspoint.com";
   char dest1[50] = "Hel!!";

   printf("Before memcpy dest = %s\n", dest1);
   memcpy(dest1, src1, strlen(src1)+1);
   printf("After memcpy dest = %s\n", dest1);
   return(0);
}
*/