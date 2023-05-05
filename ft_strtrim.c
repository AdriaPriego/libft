/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:47:20 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/05 14:20:30 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_testchar(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	if (str[i] == c)
		return (1);
	return (0);
}

static void	ft_endtrim(char *str, char const *set)
{
	int	i;
	int	ext;

	ext = 0;
	i = ft_strlen(str);
	while (i >= 0 && ext == 0)
	{
		if (ft_testchar(str[i], set) == 1)
		{
			str[i] = '\0';
		}
		else
			ext = 1;
		i--;
	}
}

static void	ft_startrim(char *str, char const *set)
{
	int		i;
	int		j;
	int		ext;

	i = 0;
	j = 0;
	ext = 0;
	while (str[i] != '\0')
	{
		if (ft_testchar(str[i], set) == 0 || ext == 1)
		{
			str[j] = str[i];
			ext = 1;
			j++;
		}
		i++;
	}
	str[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	str = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_startrim(str, set);
	ft_endtrim(str, set);
	return (str);
}
