/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:33:01 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 17:39:27 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *ft_memmove(void *dest, const void *src, int count)
{
    
}
*/


#include <stdio.h>
#include <string.h>

int main () {
   char dest[7] = "string";
   const char src[10]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
