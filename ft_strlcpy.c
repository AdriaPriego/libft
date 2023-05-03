/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:08:54 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 15:51:22 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	if (src[0] != '\0')
	{
		len = ft_strlen(src);
		if (dstsize != 0)
		{
			while (src[i] != '\0' && i < (dstsize - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	else
		dst[i] = '\0';
	return (len);
}

/*
int main(void)
{
	char dest[20] = "Pa";
	char src[20] = "Hola";
	printf("%zu\n",ft_strlcpy(dest, "", 15));
	printf("%s", dest);
}
*/