/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:07:34 by apriego-          #+#    #+#             */
/*   Updated: 2023/11/09 13:19:38 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp_ci(const unsigned char *s1, const unsigned char *s2)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		c1 = ft_tolower(s1[i]);
		c2 = ft_tolower(s2[i]);
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}
