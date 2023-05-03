/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:53:48 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 13:20:14 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *s, int n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) s;
	while (i < n)
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
	char tab[100];
	
	memset(tab, 'A', 100); tab[0] = 0;
	ft_bzero(tab,42);
	bzero(tab,42);
	printf("%s\n", str);
	printf("%s", str1);
}*/