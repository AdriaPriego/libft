/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:17:55 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 13:11:32 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char tab[100];
	memset(tab, 0, 100);
	ft_memset(tab, 'A', 0);
	printf("%c\n", tab[0]);
}
*/