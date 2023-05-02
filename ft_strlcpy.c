/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:08:54 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 22:08:54 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	i;
	int	len;

	len = 0;
    i = 0;
	if (src != '\0')
	{
        len = ft_strlen(src);
		if (dst[i] != '\0' && dstsize != 0)
		{
			while (src[i] != '\0' && i < (dstsize - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (len);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[20] = "P";
    char src[20] = "Hola";
    printf("%d\n",ft_strlcpy(dest, src, 12));
    printf("%s", dest);
}
*/