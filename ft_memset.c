/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:17:55 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 16:57:38 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) b;
	while (str[i] != '\0' && i < len)
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
	char str[] = "Hola como estas";
	char str1[] = "Hola como estas";
	char c = 'c';

	ft_memset(str,c,3);
	memset(str1,c,3);
	printf("%s\n", str);
	printf("%s", str1);
}
*/