/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:50:23 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 19:06:44 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
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
	char str[] = "Hola como estas";
	char c = 'c';
	printf("%s", ft_strrchr(str,c));
	printf("%s", strrchr(str,c));
}
*/