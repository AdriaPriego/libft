/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:30:53 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 15:40:33 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "Hola como estas";
	char str1[] = "Hola comotas";
	printf("%d", ft_strncmp(str,str1,10));
	printf("%d", strncmp(str,str1,10));
}
*/