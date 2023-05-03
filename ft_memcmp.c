/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:23:26 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 15:47:22 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
	char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "abcdefaaaa", 12);
	memcpy(str2, "abcdef", 6);

	ret = memcmp(str1, str2, 15);

	if(ret > 0) {
	  printf("str2 is less than str1");
	} else if(ret < 0) {
	  printf("str1 is less than str2");
	} else {
	  printf("str1 is equal to str2");
	}
	printf("\n");
	ret = ft_memcmp(str1, str2, 15);

	if(ret > 0) {
	  printf("str2 is less than str1");
	} else if(ret < 0) {
	  printf("str1 is less than str2");
	} else {
	  printf("str1 is equal to str2");
	}
	return(0);
}*/