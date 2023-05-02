/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:53:48 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 16:57:19 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *s, int n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) s;
	while (str[i] != '\0' && i < n)
	{
		str[i] = 0;
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

	ft_bzero(str,3);
	bzero(str1,3);
	printf("%s\n", str);
	printf("%s", str1);
}*/