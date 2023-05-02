/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:17:24 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 19:03:52 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "teste";
	char c = 'a';
	printf("%s", ft_strchr(str,c));
	printf("%s", strchr(str,c));
}*/