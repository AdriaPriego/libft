/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:23:26 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 19:25:23 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *buffer1, const void *buffer2, int count)
{
	int				i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) buffer1;
	s2 = (unsigned char *) buffer2;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < count)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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