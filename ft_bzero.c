/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:53:48 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 15:55:23 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *) s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char tab[100];
	
	memset(tab, 'A', 100); tab[0] = 0;
	ft_bzero(tab,42);
	bzero(tab,42);
	printf("%s\n", str);
	printf("%s", str1);
}*/