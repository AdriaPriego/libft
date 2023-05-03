/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:25:42 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 17:59:10 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

/*size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*var;

	i = ft_strlen(s1) + 1;
	var = malloc(i * sizeof(char));
	if (!var)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		var[i] = s1[i];
		i++;
	}
	var[i] = '\0';
	return (var);
}
/*
int main ()
{
	char *str;
	char *tmp = "HAHAHA \0 tu me vois pas !";

	str = ft_strdup(tmp);
	if (strcmp(str, tmp))
			printf("TEST_FAILED");
	free(str);
	printf("TEST_SUCCESS");
}
*/